#include "fourierModel.h"
#include "Message.h"
#include "Context.h"
#include "Views.h"

/*
  Investigate the following approach:

  compute and store the pou of each overlapping patch in the nodes of
  all the patches

  for each pair of overlapping patches, find the line pou1=pou2 by
  interpolation on the overlapping grids

  compute the intersections of these lines

  this should define a non-overlapping partitioning of the grid, which
  could be used as the boundary constrain for the unstructured algo

  Would that work??
*/

extern Context_T CTX;

#if defined(HAVE_FOURIER_MODEL)

#include "model.h"
#include "meshGFace.h"

static model *FM = 0;

void debugVertices(std::vector<MVertex*> &vertices, std::string file, 
		   bool parametric, int num=0)
{
  char name[256];
  sprintf(name, "%s_%d.pos", file.c_str(), num);
  FILE *fp = fopen(name, "w");
  fprintf(fp, "View \"debug\"{\n");
  for(unsigned int i = 0; i < vertices.size(); i++){
    double x, y, z;
    if(parametric){
      vertices[i]->getParameter(0, x); 
      vertices[i]->getParameter(1, y); 
      z = 0;
    }
    else{
      x = vertices[i]->x(); 
      y = vertices[i]->y(); 
      z = vertices[i]->z();
    }
    fprintf(fp, "SP(%g,%g,%g){%d};\n", x, y, z, i);
  }
  fprintf(fp, "};\n");    
  fclose(fp);
}

void debugElements(std::vector<MElement*> &elements, std::string file, 
		   bool parametric, int num=0)
{
  char name[256];
  sprintf(name, "%s_%d.pos", file.c_str(), num);
  FILE *fp = fopen(name, "w");
  fprintf(fp, "View \"debug\"{\n");
  for(unsigned int i = 0; i < elements.size(); i++)
    elements[i]->writePOS(fp);
  fprintf(fp, "};\n");    
  fclose(fp);
}

class meshCartesian{
public:
  typedef MDataFaceVertex<double> DVertex;
  static std::set<DVertex*, MVertexLessThanLexicographic> vPosition;
  static std::set<MVertex*> vDelete;
  static void deleteUnusedVertices()
  {
    for(std::set<MVertex*>::iterator it = vDelete.begin(); it != vDelete.end(); it++)
      delete *it;
    vDelete.clear();
  }
  void operator() (GFace *gf)
  {  
    int M = (int)(30. / CTX.mesh.lc_factor), N = (int)(30. / CTX.mesh.lc_factor);
    for(int i = 0; i < M; i++){
      for(int j = 0; j < N; j++){
	double u = i/(double)(M - 1);
	double v = j/(double)(N - 1);
	GPoint p = gf->point(u, v);
	double pou;
	FM->GetPou(gf->tag(), u, v, pou);
	DVertex *w = new DVertex(p.x(), p.y(), p.z(), gf, u, v, pou);
	// eliminate duplicate vertices on hard edges
	std::set<DVertex*, MVertexLessThanLexicographic>::iterator it = vPosition.find(w);
	if(it != vPosition.end()){
	  delete w;
	  gf->mesh_vertices.push_back(*it);
	}
	else{
	  vPosition.insert(w);
	  gf->mesh_vertices.push_back(w);
	}
      }
    }
    for(int i = 0; i < M - 1; i++){
      for(int j = 0; j < N - 1; j++){
	MQuadrangle *q = new MQuadrangle(gf->mesh_vertices[i * N + j],
					 gf->mesh_vertices[(i + 1) * N + j],
					 gf->mesh_vertices[(i + 1) * N + (j + 1)],
					 gf->mesh_vertices[i * N + (j + 1)]);
	if(FM->GetOrientation(gf->tag()) < 0) q->revert();
	gf->quadrangles.push_back(q);
      }
    }
  }
};

std::set<meshCartesian::DVertex*, MVertexLessThanLexicographic> meshCartesian::vPosition;
std::set<MVertex*> meshCartesian::vDelete;

class computePartitionOfUnity{
public:
  void operator() (GFace *gf)
  {  
    // we only normalize the partition of unity amongst patches that
    // overlap; we don't normalize across hard edges
    std::vector<int> overlaps;
    FM->GetNeighbor(gf->tag(), overlaps);
    for(unsigned int i = 0; i < gf->mesh_vertices.size(); i++){
      MVertex *v = gf->mesh_vertices[i];
      std::vector<std::pair<GFace*, SPoint2> > param;
      for(unsigned int j = 0; j < overlaps.size(); j++){
	GFace *gf2 = gf->model()->faceByTag(overlaps[j]);
	SPoint2 uv2 = gf2->parFromPoint(SPoint3(v->x(), v->y(), v->z()));
	if(gf2->containsParam(uv2)){
	  GPoint xyz2 = gf2->point(uv2);
	  const double tol = 1.e-2; // Warning: tolerance
	  if(fabs(xyz2.x() - v->x()) < tol && 
	     fabs(xyz2.y() - v->y()) < tol && 
	     fabs(xyz2.z() - v->z()) < tol)
	    param.push_back(std::pair<GFace*, SPoint2>(gf2, uv2));
	}
      }
      if(param.empty()){
      	Msg(GERROR, "Vertex %d does not belong to any patch", v->getNum());
      }
      else{
	double allPou = 0.;
	for(unsigned int i = 0; i < param.size(); i++){
	  double u2 = param[i].second[0], v2 = param[i].second[1];
	  double pou2;
	  FM->GetPou(param[i].first->tag(), u2, v2, pou2);
	  allPou += pou2;
	}
	if(v->getData()){
	  double *pou = (double*)v->getData();
	  *pou = *pou / allPou;
	}
	else{
	  Msg(GERROR, "Vertex %d has no POU data", v->getNum());
	}
      }
    }
  }
};

class createGroove{
public:
  void operator() (GFace *gf)
  {  
    // mark elements in the groove with '-1' visibility tag
    for(unsigned int i = 0; i < gf->quadrangles.size(); i++){
      MElement *e = gf->quadrangles[i];
      for(int j = 0; j < e->getNumVertices(); j++){
	void *data = e->getVertex(j)->getData();
	if(data){
	  double pou = *(double*)data;
	  if(pou < 0.51)
	    e->setVisibility(-1);
	}
      }
    }

    // remove elements in the groove
    std::vector<MQuadrangle*> newq;
    for(unsigned int i = 0; i < gf->quadrangles.size(); i++)
      if(gf->quadrangles[i]->getVisibility() < 0) 
	delete gf->quadrangles[i];
      else
	newq.push_back(gf->quadrangles[i]);
    gf->quadrangles = newq;

    // remove vertices in the groove (we cannot delete them right away
    // since some can be shared between faces on hard edges)
    std::vector<MVertex*> newv;
    for(unsigned int i = 0; i < gf->mesh_vertices.size(); i++)
      gf->mesh_vertices[i]->setVisibility(-1);
    for(unsigned int i = 0; i < gf->quadrangles.size(); i++)
      for(int j = 0; j < gf->quadrangles[i]->getNumVertices(); j++)
	gf->quadrangles[i]->getVertex(j)->setVisibility(1);
    for(unsigned int i = 0; i < gf->mesh_vertices.size(); i++)
      if(gf->mesh_vertices[i]->getVisibility() < 0) 
	meshCartesian::vDelete.insert(gf->mesh_vertices[i]);
      else
	newv.push_back(gf->mesh_vertices[i]);
    gf->mesh_vertices = newv;
  }
};

void getOrderedBoundaryLoops(std::vector<MElement*> &elements, 
			     std::vector<std::vector<MVertex*> > &loops)
{
  typedef std::pair<MVertex*, MVertex*> vpair;
  std::map<vpair, vpair> edges;
  for(unsigned int i = 0; i < elements.size(); i++){
    for(int j = 0; j < elements[i]->getNumEdges(); j++){
      MEdge e = elements[i]->getEdge(j);
      vpair p(e.getMinVertex(), e.getMaxVertex());
      if(edges.count(p)) edges.erase(p);
      else edges[p] = vpair(e.getVertex(0), e.getVertex(1));
    }
  }

  std::map<MVertex*, MVertex*> connect;
  for(std::map<vpair, vpair>::iterator it = edges.begin(); it != edges.end(); it++)
    connect[it->second.first] = it->second.second;

  loops.resize(1);
  while(connect.size()){
    if(loops[loops.size() - 1].empty()) 
      loops[loops.size() - 1].push_back(connect.begin()->first);
    MVertex *prev = loops[loops.size() - 1][loops[loops.size() - 1].size() - 1];
    MVertex *next = connect[prev];
    connect.erase(prev);
    loops[loops.size() - 1].push_back(next);
    if(next == loops[loops.size() - 1][0])
      loops.resize(loops.size() + 1);
  }

  if(loops[loops.size() - 1].empty())
    loops.pop_back();
  
  Msg(INFO, "Found %d loop(s) in boundary", loops.size());
}

void addElements(GFace *gf, std::vector<MElement*> &elements)
{
  for(unsigned int i = 0; i < gf->triangles.size(); i++)
    elements.push_back(gf->triangles[i]);
  for(unsigned int i = 0; i < gf->quadrangles.size(); i++)
    elements.push_back(gf->quadrangles[i]);
}

void classifyFaces(GFace *gf, std::set<GFace*> &connected, std::set<GFace*> &other)
{
  connected.insert(gf); 
  std::set<MVertex*> verts;
  for(unsigned int i = 0; i < gf->mesh_vertices.size(); i++)
    verts.insert(gf->mesh_vertices[i]);

  for(int i = 0; i < gf->model()->numFace() - 1; i++){ // worst case
    for(GModel::fiter it = gf->model()->firstFace(); it != gf->model()->lastFace(); it++){
      if(connected.find(*it) == connected.end()){
	for(unsigned int j = 0; j < (*it)->mesh_vertices.size(); j++){
	  if(std::find(verts.begin(), verts.end(), (*it)->mesh_vertices[j]) != verts.end()){
	    connected.insert(*it);
	    for(unsigned int k = 0; k < (*it)->mesh_vertices.size(); k++)
	      verts.insert((*it)->mesh_vertices[k]);
	    break;
	  }
	}
      }
    }
  }

  for(GModel::fiter it = gf->model()->firstFace(); it != gf->model()->lastFace(); it++)
    if(connected.find(*it) == connected.end()) 
      other.insert(*it);

  Msg(INFO, "Found %d face(s) connected to face %d", (int)connected.size(), gf->tag());
  for(std::set<GFace*>::iterator it = connected.begin(); it != connected.end(); it++)
    Msg(INFO, "   %d", (*it)->tag());
}

void getIntersectingBoundaryParts(GFace *gf, std::vector<MElement*> &elements,
				  std::vector<std::vector<std::vector<MVertex*> > > &parts)
{
  std::vector<std::vector<MVertex*> > loops;
  getOrderedBoundaryLoops(elements, loops);
  parts.resize(loops.size());

  if(gf->tag() == 0){
    debugElements(elements, "elements", false);
    for(unsigned int i = 0; i < loops.size(); i++)
      debugVertices(loops[i], "boundary", false, i);
  }

  for(unsigned int i = 0; i < loops.size(); i++){
    // last vertex in loop is equal to the firt vertex
    bool newpart = true;
    for(unsigned int j = 0; j < loops[i].size() - 1; j++){
      MVertex *v = loops[i][j];
      SPoint2 uv = gf->parFromPoint(SPoint3(v->x(), v->y(), v->z()));
      if(gf->containsParam(uv)){
	GPoint xyz = gf->point(uv);
	const double tol = 1.e-2; // Warning: tolerance
	if(fabs(xyz.x() - v->x()) < tol && 
	   fabs(xyz.y() - v->y()) < tol && 
	   fabs(xyz.z() - v->z()) < tol){
	  if(newpart){
	    parts[i].resize(parts[i].size() + 1);
	    newpart = false;
	  }
	  v->setParameter(0, uv[0]);
	  v->setParameter(1, uv[1]);
	  parts[i][parts[i].size() - 1].push_back(v);
	}
	else{
	  newpart = true;
	}
      }
      else{
	newpart = true;
      }
    }
  }
}

class createGrout{
public:
  void operator() (GFace *gf)
  {  
    if(gf->tag() > 1) return;

    Msg(INFO, "Processing grout for face %d", gf->tag());

    std::set<GFace*> connected, other;
    classifyFaces(gf, connected, other);

    std::vector<MElement*> connectedElements, otherElements;
    for(std::set<GFace*>::iterator it = connected.begin(); it != connected.end(); it++)
      addElements(*it, connectedElements);
    for(std::set<GFace*>::iterator it = other.begin(); it != other.end(); it++)
      addElements(*it, otherElements);

    std::vector<std::vector<std::vector<MVertex*> > > inside;
    getIntersectingBoundaryParts(gf, connectedElements, inside);
    Msg(INFO, "%d inside loop(s)", (int)inside.size());
    for(unsigned int i = 0; i < inside.size(); i++)
      Msg(INFO, "   inside loop %d intersect has %d part(s)", i, (int)inside[i].size());

    std::vector<std::vector<std::vector<MVertex*> > > outside;
    getIntersectingBoundaryParts(gf, otherElements, outside);
    Msg(INFO, "%d outside loop(s)", (int)outside.size());
    for(unsigned int i = 0; i < outside.size(); i++)
      Msg(INFO, "   outside loop %d intersect has %d part(s)", i, (int)outside[i].size());

    std::vector<MVertex*> hole, loop;
    
    if(inside.size() == 1 && inside[0].size() == 1){
      // create hole
      SPoint2 ic(0., 0.);
      {
	for(unsigned int i = 0; i < inside[0][0].size(); i++){
	  hole.push_back(inside[0][0][i]);
	  double u, v;
	  inside[0][0][i]->getParameter(0, u);
	  inside[0][0][i]->getParameter(1, v);
	  ic += SPoint2(u, v);
	}
	ic *= 1. / (double)inside[0][0].size();
	hole.push_back(hole[0]);
      }
      // order exterior parts and create exterior loop
      {
	std::vector<std::pair<double, int> > angle;
	std::map<int, std::vector<MVertex*> > outside_flat;
	int part = 0;
	for(unsigned int i = 0; i < outside.size(); i++){
	  for(unsigned int j = 0; j < outside[i].size(); j++){
	    for(unsigned int k = 0; k < outside[i][j].size(); k++){
	      outside_flat[part].push_back(outside[i][j][k]);
	    }
	    part++;
	  }
	}
	std::map<int, std::vector<MVertex*> >::iterator it = outside_flat.begin();
	for(; it != outside_flat.end(); it++){
	  SPoint2 oc(0., 0.);
	  for(unsigned int i = 0; i < it->second.size(); i++){
	    double u, v;
	    it->second[i]->getParameter(0, u);
	    it->second[i]->getParameter(1, v);
	    oc += SPoint2(u, v);
	  }
	  oc *= 1. / (double)it->second.size();
	  double a = atan2(oc[1] - ic[1], oc[0] - ic[0]);
	  angle.push_back(std::make_pair(a, it->first));
	}
	std::sort(angle.begin(), angle.end());
	for(unsigned int i = 0; i < angle.size(); i++){
	  for(unsigned int j = 0; j < outside_flat[angle[i].second].size(); j++)
	    loop.push_back(outside_flat[angle[i].second][j]);
	}
	loop.push_back(hole[0]);
      }
      // mesh the grout
      fourierFace *grout = new fourierFace(gf, loop, hole);
      meshGFace mesh; 
      mesh(grout);
      for(unsigned int i = 0; i < grout->triangles.size(); i++)
	gf->triangles.push_back(grout->triangles[i]);
      for(unsigned int i = 0; i < loop.size(); i++)
	gf->mesh_vertices.push_back(loop[i]);
      for(unsigned int i = 0; i < hole.size(); i++)
	gf->mesh_vertices.push_back(hole[i]);
      for(unsigned int i = 0; i < grout->mesh_vertices.size(); i++)
	gf->mesh_vertices.push_back(grout->mesh_vertices[i]);
      delete grout;
    }
    else{
      Msg(WARNING, "Faces with no holes not implemented yet!");

      // num individual meshes = num parts with onWhat() == gf!

      // for each one
      //   - find other parts that are "close" (using POUs?)
      //   - sort parts w.r.t barycenter of each group      

      for(unsigned int i = 0; i < inside.size(); i++){
	for(unsigned int j = 0; j < inside[i].size(); j++){
	  for(unsigned int k = 0; k < inside[i][j].size(); k++){
	    loop.push_back(inside[i][j][k]);
	  }
	}
      }
    }
    
    debugVertices(hole, "hole", false, gf->tag());
    debugVertices(loop, "loop", false, gf->tag());
  }
};

fourierModel::fourierModel(const std::string &name)
  : GModel(name)
{
  FM = new model(name);

  CTX.terminal = 1;
  
  Msg(INFO, "Fourier model created: %d patches", FM->GetNumPatches());

  // create one face per patch
  for(int i = 0; i < FM->GetNumPatches(); i++)
    add(new fourierFace(this, i));

  meshCartesian::vPosition.clear();
  MVertexLessThanLexicographic::tolerance = 1.e-12; // Warning: tolerance

  // mesh each face with quads
  std::for_each(firstFace(), lastFace(), meshCartesian());

  // compute partition of unity
  std::for_each(firstFace(), lastFace(), computePartitionOfUnity());

  // create grooves
  meshCartesian::vDelete.clear();
  std::for_each(firstFace(), lastFace(), createGroove());
  meshCartesian::deleteUnusedVertices();
  
  // create grout
  std::for_each(firstFace(), lastFace(), createGrout());

  CTX.mesh.changed = ENT_ALL;
}


fourierModel::~fourierModel()
{
  delete FM;
  FM = 0;
}

fourierEdge::fourierEdge(GModel *model, int num, GVertex *v1, GVertex *v2)
  : GEdge(model, num, v1, v2)
{
}

fourierFace::fourierFace(GModel *m, int num)
  : GFace(m, num)
{
  for(int i = 0; i < 4; i++){ _v[i] = 0; _e[i] = 0; }
  _discrete = 1;
}

fourierFace::fourierFace(GFace *f, std::vector<MVertex*> &loop, std::vector<MVertex*> &hole)
  : GFace(f->model(), f->tag())
{
  for(int i = 0; i < 4; i++){ _v[i] = 0; _e[i] = 0; }
  _discrete = 0;

  if(!loop.size()){
    Msg(GERROR, "No vertices in exterior loop");
    return; 
  }
  
  _v[0] = new fourierVertex(f->model(), loop[0]);
  _v[1] = new fourierVertex(f->model(), loop[loop.size() - 2]);
  _e[0] = new fourierEdge(f->model(), 1, _v[0], _v[1]);
  _e[0]->addFace(this);
  _e[1] = new fourierEdge(f->model(), 2, _v[1], _v[0]);
  _e[1]->addFace(this);
  for(unsigned int i = 1; i < loop.size() - 2; i++)
    _e[0]->mesh_vertices.push_back(loop[i]);

  l_edges.push_back(_e[0]); l_dirs.push_back(1);
  l_edges.push_back(_e[1]); l_dirs.push_back(1);

  if(hole.size()){
    _v[2] = new fourierVertex(f->model(), hole[0]);
    _v[3] = new fourierVertex(f->model(), hole[hole.size() - 2]);
    _e[2] = new fourierEdge(f->model(), 3, _v[2], _v[3]);
    _e[2]->addFace(this);
    _e[3] = new fourierEdge(f->model(), 4, _v[3], _v[2]);
    _e[3]->addFace(this);
    for(unsigned int i = 1; i < hole.size() - 2; i++)
      _e[2]->mesh_vertices.push_back(hole[i]);

    l_edges.push_back(_e[2]); l_dirs.push_back(1);
    l_edges.push_back(_e[3]); l_dirs.push_back(1);
  }
}

fourierFace::~fourierFace()
{
  if(!_discrete){
    // this face was just used temporarily for meshing, so don't
    // delete the mesh vertices or the mesh elements: they have been
    // transferred elsewhere
    for(int i = 0; i < 4; i++){ 
      if(_e[i]){
	_e[i]->mesh_vertices.clear();
	delete _e[i];
      }
    }
    for(int i = 0; i < 4; i++){ 
      if(_v[i]){
	_v[i]->mesh_vertices.clear();
	delete _v[i];
      }
    }
    triangles.clear();
    quadrangles.clear();
    mesh_vertices.clear();
    l_edges.clear();
  }
}

Range<double> fourierFace::parBounds(int i) const
{
  double min, max;
  FM->GetParamBounds(tag(), i, min, max);
  return Range<double>(min, max);
}
  
GPoint fourierFace::point(double par1, double par2) const
{
  double x, y, z;
  FM->GetPoint(tag(), par1, par2, x, y, z);
  return GPoint(x, y, z);
}

GPoint fourierFace::point(const SPoint2 &pt) const
{
  return point(pt[0], pt[1]);
}

GPoint fourierFace::closestPoint(const SPoint3 & queryPoint)
{
  throw;
}
  
int fourierFace::containsPoint(const SPoint3 &pt) const
{
  throw;
}

int fourierFace::containsParam(const SPoint2 &pt) const
{
  double umin, umax, vmin, vmax;
  FM->GetParamBounds(tag(), 0, umin, umax);
  FM->GetParamBounds(tag(), 1, vmin, vmax);
  const double tol = 1.e-6;
  if(pt[0] < umin - tol || pt[0] > umax + tol) return 0;
  if(pt[1] < vmin - tol || pt[1] > vmax + tol) return 0;
  return 1;
}
  
SVector3 fourierFace::normal(const SPoint2 &param) const
{
  throw;
}

GEntity::GeomType fourierFace::geomType() const
{
  return _discrete ? GEntity::DiscreteSurface : GEntity::Unknown;
}

SPoint2 fourierFace::parFromPoint(const SPoint3 &p) const
{
  double u, v;
  FM->GetParamFromPoint(tag(), p.x(), p.y(), p.z(), u, v);
  return SPoint2(u, v);
}

#endif

# Gmsh - Copyright (C) 1997-2017 C. Geuzaine, J.-F. Remacle
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to the public mailing list <gmsh@onelab.info>.

# This is the master definition file for the Gmsh API.
#
# Running this script will generate
#
#  - gmsh.h: the header defining the Gmsh C++ API
#  - gmshc.h: the header defining the Gmsh C API
#  - gmshc.cpp: the wrapper for the Gmsh C API
#  - gmsh.py: the module defining the Gmsh Python API
#
# By design, the Gmsh API is purely functional, and only uses elementary types.
#
# See `gmsh/demos/api' for examples on how to use the Gmsh API. In particular,
# this directory contains C++ and Python versions of several of the `.geo'
# tutorials from `gmsh/tutorials'.

from GenApi import *

api = API()

gmsh = api.add_module('gmsh','Top-level functions')

doc = '''Initializes Gmsh. This must be called before any call to the other functions in the API. If argc and argv are provided, they will be handled in the same way as the command line arguments in the Gmsh app.'''
gmsh.add('initialize',doc,None,argcargv())

doc = '''Finalizes Gmsh. This must be called when you are done using the Gmsh API.'''
gmsh.add('finalize',doc,None)

doc = '''Opens a file and adds one (or more) new model(s). Equivalent to the `File->Open' menu in the Gmsh app. Handling of the file depends on its extension and/or its contents.'''
gmsh.add('open',doc,None,istring('fileName'))

doc = '''Merges a file. Equivalent to the `File->Merge' menu in the Gmsh app. Handling of the file depends on its extension and/or its contents.'''
gmsh.add('merge',doc,None,istring('fileName'))

doc = '''Writes a file. The export format is determined by the file extension.'''
gmsh.add('write',doc,None,istring('fileName'))

doc = '''Clears all loaded models and post-processing data, and adds a new empty model.'''
gmsh.add('clear',doc,None)

option = gmsh.add_module('option','Global option handling functions')

doc = '''Sets a numerical option to `value'. `name' is of the form "category.option" or "category[num].option". Available categories and options are listed in the Gmsh reference manual.'''
option.add('setNumber',doc,None,istring('name'),idouble('value'))

doc = '''Gets the `value' of a numerical option.'''
option.add('getNumber',doc,None,istring('name'),odouble('value'))

doc = '''Sets a string option to `value'.'''
option.add('setString',doc,None,istring('name'),istring('value'))

doc = '''Gets the `value' of a string option.'''
option.add('getString',doc,None,istring('name'),ostring('value'))

model = gmsh.add_module('model','Per-model functions')

doc = '''Adds a new model, with name `name', and sets it as the current model.'''
model.add('add',doc,None,istring('name'))

doc = '''Removes the current model.'''
model.add('remove',doc,None)

doc = '''Lists the names of all models.'''
model.add('list',doc,None,ovectorstring('names'))

doc = '''Sets the current model to the model with name `name'. If several models have the same name, selects the one that was added first.'''
model.add('setCurrent',doc,None,istring('name'))

doc = '''Gets all the (elementary) geometrical entities in the current model. If `dim' is >= 0, returns only the entities of the specified dimension (e.g. points if `dim' == 0). The entities are returned as a vector of (dim, tag) integer pairs.'''
model.add('getEntities',doc,None,ovectorpair('dimTags'),iint('dim','-1'))

doc = '''Gets all the physical groups in the current model. If `dim' is >= 0, returns only the entities of the specified dimension (e.g. physical points if `dim' == 0). The entities are returned as a vector of (dim, tag) integer pairs.'''
model.add('getPhysicalGroups',doc,None,ovectorpair('dimTags'),iint('dim','-1'))

doc = '''Gets the tags of all the (elementary) geometrical entities making up the physical group of dimension `dim' and tag `tag'.'''
model.add('getEntitiesForPhysicalGroup',doc,None,iint('dim'),iint('tag'),ovectorint('tags'))

doc = '''Adds a physical group of dimension `dim', grouping the elementary entities with tags `tags'. The function returns the tag of the physical group, equal to `tag' if `tag' is positive, or a new tag if `tag' < 0.'''
model.add('addPhysicalGroup',doc,oint,iint('dim'),ivectorint('tags'),iint('tag','-1'))

doc = '''Sets the name of the physical group of dimension `dim' and tag `tag'.'''
model.add('setPhysicalName',doc,None,iint('dim'),iint('tag'),istring('name'))

doc = '''Gets the name of the physical group of dimension `dim' and tag `tag'.'''
model.add('getPhysicalName',doc,None,iint('dim'),iint('tag'),ostring('name'))

doc = '''Gets the boundary of the geometrical entities `dimTags'. Returns in `outDimTags' the boundary of the individual entities (if `combined' is false) or the boundary of the combined geometrical shape formed by all input entities (if `combined' is true). Returns tags multiplied by the sign of the boundary entity if `oriented' is true. Applies the boundary operator recursively down to dimension 0 (i.e. to points) if `recursive' is true.'''
model.add('getBoundary',doc,None,ivectorpair('dimTags'),ovectorpair('outDimTags'),ibool('combined','true','True'),ibool('oriented','true','True'),ibool('recursive','false','False'))

doc = '''Gets the (elementary) geometrical entities in the bounding box defined by the two points (xmin, ymin, zmin) and (xmax, ymax, zmax). If `dim' is >= 0, returns only the entities of the specified dimension (e.g. points if `dim' == 0).'''
model.add('getEntitiesInBoundingBox',doc,None,idouble('xmin'),idouble('ymin'),idouble('zmin'),idouble('xmax'),idouble('ymax'),idouble('zmax'),ovectorpair('tags'),iint('dim','-1'))

doc = '''Gets the bounding box (xmin, ymin, zmin), (xmax, ymax, zmax) of the geometrical entity of dimension `dim' and tag `tag'.'''
model.add('getBoundingBox',doc,None,iint('dim'),iint('tag'),odouble('xmin'),odouble('ymin'),odouble('zmin'),odouble('xmax'),odouble('ymax'),odouble('zmax'))

doc = '''Adds a discrete geometrical entity (defined by a mesh) of dimension `dim' in the current model. The function returns the tag of the new discrete entity, equal to `tag' if `tag' is positive, or a new tag if `tag' < 0. `boundary' specifies the tags of the entities on the boundary of the discrete entity, if any. Specyfing `boundary' allows Gmsh to construct the topology of the overall model.'''
model.add('addDiscreteEntity',doc,oint,iint('dim'),iint('tag','-1'),ivectorint('boundary','std::vector<int>()',"[]"))

doc = '''Removes the entities `dimTags' of the current model. If `recursive' is true, remove all the entities on their boundaries, down to dimension 0.'''
model.add('removeEntities',doc,None,ivectorpair('dimTags'),ibool('recursive','false','False'))

mesh = model.add_module('mesh','Per-model meshing functions')

doc = '''Generates a mesh of the current model, up to dimension `dim' (0, 1, 2 or 3).'''
mesh.add('generate',doc,None,iint('dim'))

doc = '''Gets the last entities (if any) where a meshing error occurred. Currently only populated by the new 3D meshing algorithms.'''
mesh.add('getLastEntityError',doc,None,ovectorpair('dimTags'))

doc = '''Gets the last mesh vertices (if any) where a meshing error occurred. Currently only populated by the new 3D meshing algorithms.'''
mesh.add('getLastVertexError',doc,None,ovectorint('vertexTags'))

doc = '''Gets the mesh vertices of the entity of dimension `dim' and `tag' tag. `vertextags' contains the vertex tags (their unique, strictly positive identification numbers). `coord` is a vector of length `3 * vertexTags.size()' that contains the (x, y, z) coordinates of the vertices, concatenated. `parametricCoord` contains the parametric coordinates of the vertices, if available. The length of `parametricCoord` can be 0 or `dim * vertexTags.size()'.'''
mesh.add('getVertices',doc,None,iint('dim'),iint('tag'),ovectorint('vertexTags'),ovectordouble('coord'),ovectordouble('parametricCoord'))

doc = '''Gets the mesh elements of the entity of dimension `dim' and `tag' tag. `types' contains the MSH types of the elements (e.g. `2' for 3-node triangles: see the Gmsh reference manual). `elementTags' is a vector of length `types.size()'; each entry is a vector containing the tags (unique, strictly positive identifiers) of the elements of the corresponding type. `vertexTags' is also a vector of length `types.size()'; each entry is a vector of length equal to the number of elements of the given type times the number of vertices for this type of element, that contains the vertex tags of all the elements of the given type, concatenated.'''
mesh.add('getElements',doc,None,iint('dim'),iint('tag'),ovectorint('types'),ovectorvectorint('elementTags'),ovectorvectorint('vertexTags'))

doc = '''Sets the mesh vertices in the geometrical entity of dimension `dim' and tag `tag'. `vertextags' contains the vertex tags (their unique, strictly positive identification numbers). `coord` is a vector of length `3 * vertexTags.size()' that contains the (x, y, z) coordinates of the vertices, concatenated. The optional `parametricCoord` vector contains the parametric coordinates of the vertices, if any. The length of `parametricCoord` can be 0 or `dim * vertexTags.size()'.'''
mesh.add('setVertices',doc,None,iint('dim'),iint('tag'),ivectorint('vertexTags'),ivectordouble('coord'),ivectordouble('parametricCoord','std::vector<double>()',"[]"))

doc = '''Sets the mesh elements of the entity of dimension `dim' and `tag' tag. `types' contains the MSH types of the elements (e.g. `2' for 3-node triangles: see the Gmsh reference manual). `elementTags' is a vector of length `types.size()'; each entry is a vector containing the tags (unique, strictly positive identifiers) of the elements of the corresponding type. `vertexTags' is also a vector of length `types.size()'; each entry is a vector of length equal to the number of elements of the give type times the number of vertices per element, that contains the vertex tags of all the elements of the given type, concatenated.'''
mesh.add('setElements',doc,None,iint('dim'),iint('tag'),ivectorint('types'),ivectorvectorint('elementTags'),ivectorvectorint('vertexTags'))

doc = '''Gets the coordinates and the parametric coordinates (if any) of the mesh vertex with tag `tag'. This is a useful by inefficient way of accessing mesh vertex data, as it relies on a cache stored in the model. For large meshes all the vertices in the model should be numbered in a continuous sequence of tags from 1 to N to maintain reasonnable performance (in this case the internal cache is based on a vector; otherwise it uses a map).'''
mesh.add('getVertex',doc,None,iint('vertexTag'),ovectordouble('coord'),ovectordouble('parametricCoord'))

doc = '''Gets the type and vertex tags of the mesh element with tag `tag'. This is a useful but inefficient way of accessing mesh element data, as it relies on a cache stored in the model. For large meshes all the elements in the model should be numbered in a continuous sequence of tags from 1 to N to maintain reasonnable performance (in this case the internal cache is based on a vector; otherwise it uses a map).'''
mesh.add('getElement',doc,None,iint('elementTag'),oint('type'),ovectorint('vertexTags'))

doc = '''Sets a mesh size constraint on the geometrical entities `dimTags'. Currently only entities of dimension 0 (points) are handled.'''
mesh.add('setSize',doc,None,ivectorpair('dimTags'),idouble('size'))

doc = '''Sets a transfinite meshing constraint on the line `tag', with `numVertices' mesh vertices distributed according to `type' and `coef'. Currently supported types are "Progression" (geometrical progression with power `coef') and "Bump" (refinement toward both extreminties of the line).'''
mesh.add('setTransfiniteLine',doc,None,iint('tag'),iint('numVertices'),istring('type','"Progression"'),idouble('coef','1.'))

doc = '''Sets a transfinite meshing constraint on the surface `tag'. `arrangement' describes the arrangement of the triangles when the surface is not flagged as recombined: currently supported values are "Left", "Right", "AlternateLeft" and "AlternateRight". `cornerTags' can be used to specify the (3 or 4) corners of the transfinite interpolation explicitly; specifying the corners explicitly is mandatory if the surface has more that 3 or 4 points on its boundary.'''
mesh.add('setTransfiniteSurface',doc,None,iint('tag'),istring('arrangement','"Left"'),ivectorint('cornerTags','std::vector<int>()',"[]"))

doc = '''Sets a transfinite meshing constraint on the surface `tag'. `cornerTags' can be used to specify the (6 or 8) corners of the transfinite interpolation explicitly.'''
mesh.add('setTransfiniteVolume',doc,None,iint('tag'),ivectorint('cornerTags','std::vector<int>()',"[]"))

doc = '''Sets a recombination meshing constraint on the geometrical entity of dimension `dim' and tag `tag'. Currently only entities of dimension 2 (to recombine triangles into quadrangles) are supported.'''
mesh.add('setRecombine',doc,None,iint('dim'),iint('tag'))

doc = '''Sets a smoothing meshing constraint on the geometrical entity of dimension `dim' and tag `tag'. `val' iterations of a Laplace smoother are applied.'''
mesh.add('setSmoothing',doc,None,iint('dim'),iint('tag'),iint('val'))

doc = '''Sets a reverse meshing constraint on the geometrical entity of dimension `dim' and tag `tag'. If `val' is true, the mesh orientation will be reversed with respect to the natural mesh orientation (i.e. the orientation consistent with the orientation of the geometrical entity). If `val' is false, the mesh is left as-is.'''
mesh.add('setReverse',doc,None,iint('dim'),iint('tag'),ibool('val','true','True'))

doc = '''Emebds the geometrical entities of dimension `dim' and tags `tags' in the (inDim, inTag) geometrical entity. `inDim' must be strictly greater than `dim'.'''
mesh.add('embed',doc,None,iint('dim'),ivectorint('tags'),iint('inDim'),iint('inTag'))

field = mesh.add_module('field','Per-model mesh size field functions')

doc = '''Adds a new mesh size field of type `type'. If `tag' is positive, assign the tag explcitly; otherwise a new tag is assigned automatically. Returns the field tag.'''
field.add('add',doc,oint,istring('type'),iint('tag','-1'))

doc = '''Removes the field with tag `tag'.'''
field.add('remove',doc,None,iint('tag'))

doc = '''Sets the numerical option `option' to value `value' for field `tag'.'''
field.add('setNumber',doc,None,iint('tag'),istring('option'),idouble('value'))

doc = '''Sets the string option `option' to value `value' for field `tag'.'''
field.add('setString',doc,None,iint('tag'),istring('option'),istring('value'))

doc = '''Sets the numerical list option `option' to value `value' for field `tag'.'''
field.add('setNumbers',doc,None,iint('tag'),istring('option'),ivectordouble('value'))

doc = '''Sets the field `tag' as background mesh size field.'''
field.add('setAsBackground',doc,None,iint('tag'))

geo = model.add_module('geo','Internal per-model GEO CAD kernel functions')

doc = '''Adds a geometrical point in the internal GEO CAD representation, at coordinates (x, y, z). If `meshSize' is > 0, adds a meshing constraint at that point. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the point. (Note that the point will be added in the current model only after gmshModelGeoSynchronize() is called. This behavior holds for all the entities added in the gmshModelGeo module.)'''
geo.add('addPoint',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('meshSize','0.'),iint('tag','-1'))

doc = '''Adds a straight line segment between the two points with tags `startTag' and `endTag'. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the line.'''
geo.add('addLine',doc,oint,iint('startTag'),iint('endTag'),iint('tag','-1'))

doc = '''Adds a circle arc (stricly smaller than Pi) between the two points with tags `startTag' and `endTag', with center `centertag'. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. If (`nx', `ny', `nz') != (0,0,0), explicitely sets the plane of the circle arc. Returns the tag of the circle arc.'''
geo.add('addCircleArc',doc,oint,iint('startTag'),iint('centerTag'),iint('endTag'),iint('tag','-1'),idouble('nx','0.'),idouble('ny','0.'),idouble('nz','0.'))

doc = '''Adds an ellipse arc (stricly smaller than Pi) between the two points `startTag' and `endTag', with center `centertag' and major axis point `majorTag'. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. If (`nx', `ny', `nz') != (0,0,0), explicitely sets the plane of the circle arc. Returns the tag of the ellipse arc.'''
geo.add('addEllipseArc',doc,oint,iint('startTag'),iint('centerTag'),iint('majorTag'),iint('endTag'),iint('tag','-1'),idouble('nx','0.'),idouble('ny','0.'),idouble('nz','0.'))

doc = '''Adds a spline curve going through `vertexTags' points. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically.  Returns the tag of the spline curve.'''
geo.add('addSpline',doc,oint,ivectorint('vertexTags'),iint('tag','-1'))

doc = '''Adds a b-spline curve with `vertexTags' control points. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically.  Returns the tag of the b-spline curve.'''
geo.add('addBSpline',doc,oint,ivectorint('vertexTags'),iint('tag','-1'))

doc = '''Adds a Bezier curve with `vertexTags' control points. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically.  Returns the tag of the Bezier curve.'''
geo.add('addBezier',doc,oint,ivectorint('vertexTags'),iint('tag','-1'))

doc = '''Adds a line loop (a closed wire) formed by `edgeTags'. `edgeTags' should contain (signed) tags of geometrical enties of dimension 1 forming a closed loop: a negative tag signifies that the underlying edge is considered with reversed orientation. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the line loop.'''
geo.add('addLineLoop',doc,oint,ivectorint('edgeTags'),iint('tag','-1'))

doc = '''Adds a plane surface defined by one or more line loops `wireTags'. The first line loop defines the exterior contour; additional line loop define holes. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the surface.'''
geo.add('addPlaneSurface',doc,oint,ivectorint('wireTags'),iint('tag','-1'))

doc = '''Adds a surface filling the line loops in `wireTags'. Currently only a single line loop is supported; this line loop should be composed by 3 or 4 edges only. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the surface.'''
geo.add('addSurfaceFilling',doc,oint,ivectorint('wireTags'),iint('tag','-1'),iint('sphereCenterTag','-1'))

doc = '''Adds a surface loop (a closed shell) formed by `faceTags'.  If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the surface loop.'''
geo.add('addSurfaceLoop',doc,oint,ivectorint('faceTags'),iint('tag','-1'))

doc = '''Adds a volume defined by one or more surface loops `shellTags'. The first surface loop defines the exterior boundary; additional surface loop define holes. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the volume.'''
geo.add('addVolume',doc,oint,ivectorint('shellTags'),iint('tag','-1'))

doc = '''Extrudes the geometrical entities in `dimTags' by translation along (`dx', `dy', `dz'). Returns extruded entities in `outDimTags'. If `numElements' is not empty, also extrude the mesh: the entries in `numElements' give the number of elements in each layer. If `height' is not empty, it provides the (cummulative) height of the different layers, normalized to 1.'''
geo.add('extrude',doc,None,ivectorpair('dimTags'),idouble('dx'),idouble('dy'),idouble('dz'),ovectorpair('outDimTags'),ivectorint('numElements','std::vector<int>()',"[]"),ivectordouble('heights','std::vector<double>()',"[]"),ibool('recombine','false','False'))

doc = '''Extrudes the geometrical entities in `dimTags' by rotation of `angle' radians around the axis of revolution defined by the point (`x', `y', `z') and the direction (`ax', `ay', `az'). Returns extruded entities in `outDimTags'. If `numElements' is not empty, also extrude the mesh: the entries in `numElements' give the number of elements in each layer. If `height' is not empty, it provides the (cummulative) height of the different layers, normalized to 1.'''
geo.add('revolve',doc,None,ivectorpair('dimTags'),idouble('x'),idouble('y'),idouble('z'),idouble('ax'),idouble('ay'),idouble('az'),idouble('angle'),ovectorpair('outDimTags'),ivectorint('numElements','std::vector<int>()',"[]"),ivectordouble('heights','std::vector<double>()',"[]"),ibool('recombine','false','False'))

doc = '''Extrudes the geometrical entities in `dimTags' by a combined translation and rotation of `angle' radians, along (`dx', `dy', `dz') and around the axis of revolution defined by the point (`x', `y', `z') and the direction (`ax', `ay', `az'). Returns extruded entities in `outDimTags'. If `numElements' is not empty, also extrude the mesh: the entries in `numElements' give the number of elements in each layer. If `height' is not empty, it provides the (cummulative) height of the different layers, normalized to 1.'''
geo.add('twist',doc,None,ivectorpair('dimTags'),idouble('x'),idouble('y'),idouble('z'),idouble('dx'),idouble('dy'),idouble('dz'),idouble('ax'),idouble('ay'),idouble('az'),idouble('angle'),ovectorpair('outDimTags'),ivectorint('numElements','std::vector<int>()',"[]"),ivectordouble('heights','std::vector<double>()',"[]"),ibool('recombine','false','False'))

doc = '''Translates the geometrical entities in `dimTags' along (`dx', `dy', `dz').'''
geo.add('translate',doc,None,ivectorpair('dimTags'),idouble('dx'),idouble('dy'),idouble('dz'))

doc = '''Rotates the geometrical entities in `dimTags' of `angle' radians around the axis of revolution defined by the point (`x', `y', `z') and the direction (`ax', `ay', `az').'''
geo.add('rotate',doc,None,ivectorpair('dimTags'),idouble('x'),idouble('y'),idouble('z'),idouble('ax'),idouble('ay'),idouble('az'),idouble('angle'))

doc = '''Scales the geometrical entities in `dimTag' by factors `a', `b' and `c' along the three coordinate axes; use (`x', `y', `z') as the center of the homothetic transformation.'''
geo.add('dilate',doc,None,ivectorpair('dimTags'),idouble('x'),idouble('y'),idouble('z'),idouble('a'),idouble('b'),idouble('c'))

doc = '''Applies a symmetry transformation to the geometrical entities in `dimTag', with respect to the plane of equation `a' * x + `b' * y + `c' * z + `d' = 0.'''
geo.add('symmetry',doc,None,ivectorpair('dimTags'),idouble('a'),idouble('b'),idouble('c'),idouble('d'))

doc = '''Copies the entities in `dimTags'; the new entities are returned in `outDimTags'.'''
geo.add('copy',doc,None,ivectorpair('dimTags'),ovectorpair('outDimTags'))

doc = '''Removes the entities `dimTags'. If `recursive' is true, remove all the entities on their boundaries, down to dimension 0.'''
geo.add('remove',doc,None,ivectorpair('dimTags'),ibool('recursive','false','False'))

doc = '''Remove all duplicate entities (different entities at the same geometrical location).'''
geo.add('removeAllDuplicates',doc,None)

doc = '''Synchronize the internal GEO CAD representation with the current Gmsh model. This can be called at any time, but since it involves a non trivial amount of processing, the number of synchronization points should normally be minimized.'''
geo.add('synchronize',doc,None)

mesh = geo.add_module('mesh','geo-specific meshing constraints')

doc = '''Sets a mesh size constraint on the geometrical entities `dimTags'. Currently only entities of dimension 0 (points) are handled.'''
mesh.add('setSize',doc,None,ivectorpair('dimTags'),idouble('size'))

doc = '''Sets a transfinite meshing constraint on the line `tag', with `numVertices' mesh vertices distributed according to `type' and `coef'. Currently supported types are "Progression" (geometrical progression with power `coef') and "Bump" (refinement toward both extreminties of the line).'''
mesh.add('setTransfiniteLine',doc,None,iint('tag'),iint('nPoints'),istring('type','"Progression"'),idouble('coef','1.'))

doc = '''Sets a transfinite meshing constraint on the surface `tag'. `arrangement' describes the arrangement of the triangles when the surface is not flagged as recombined: currently supported values are "Left", "Right", "AlternateLeft" and "AlternateRight". `cornerTags' can be used to specify the (3 or 4) corners of the transfinite interpolation explicitly; specifying the corners explicitly is mandatory if the surface has more that 3 or 4 points on its boundary.'''
mesh.add('setTransfiniteSurface',doc,None,iint('tag'),istring('arrangement','"Left"'),ivectorint('cornerTags','std::vector<int>()',"[]"))

doc = '''Sets a transfinite meshing constraint on the surface `tag'. `cornerTags' can be used to specify the (6 or 8) corners of the transfinite interpolation explicitly.'''
mesh.add('setTransfiniteVolume',doc,None,iint('tag'),ivectorint('cornerTags','std::vector<int>()',"[]"))

doc = '''Sets a recombination meshing constraint on the geometrical entity of dimension `dim' and tag `tag'. Currently only entities of dimension 2 (to recombine triangles into quadrangles) are supported.'''
mesh.add('setRecombine',doc,None,iint('dim'),iint('tag'),idouble('angle','45.'))

doc = '''Sets a smoothing meshing constraint on the geometrical entity of dimension `dim' and tag `tag'. `val' iterations of a Laplace smoother are applied.'''
mesh.add('setSmoothing',doc,None,iint('dim'),iint('tag'),iint('val'))

doc = '''Sets a reverse meshing constraint on the geometrical entity of dimension `dim' and tag `tag'. If `val' is true, the mesh orientation will be reversed with respect to the natural mesh orientation (i.e. the orientation consistent with the orientation of the geometrical entity). If `val' is false, the mesh is left as-is.'''
mesh.add('setReverse',doc,None,iint('dim'),iint('tag'),ibool('val','true','True'))

occ = model.add_module('occ','Internal per-model OpenCASCADE CAD kernel functions')

doc = '''Adds a geometrical point in the internal OpenCASCADE CAD representation, at coordinates (x, y, z). If `meshSize' is > 0, adds a meshing constraint at that point. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the point. (Note that the point will be added in the current model only after gmshModelGeoSynchronize() is called. This behavior holds for all the entities added in the gmshModelOcc module.)'''
occ.add('addPoint',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('meshSize','0.'),iint('tag','-1'))

doc = '''Adds a straight line segment between the two points with tags `startTag' and `endTag'. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the line.'''
occ.add('addLine',doc,oint,iint('startTag'),iint('endTag'),iint('tag','-1'))

doc = '''Adds a circle arc between the two points with tags `startTag' and `endTag', with center `centertag'. If `tag' is positive, sets the tag explicitly; otherwise a new tag is selected automatically. Returns the tag of the circle arc.'''
occ.add('addCircleArc',doc,oint,iint('startTag'),iint('centerTag'),iint('endTag'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addCircle',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('r'),iint('tag','-1'),idouble('angle1','0.'),idouble('angle2','2*M_PI','2*pi'))

doc = '''TODO'''
occ.add('addEllipseArc',doc,oint,iint('startTag'),iint('centerTag'),iint('endTag'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addEllipse',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('r1'),idouble('r2'),iint('tag','-1'),idouble('angle1','0.'),idouble('angle2','2*M_PI','2*pi'))

doc = '''TODO'''
occ.add('addSpline',doc,oint,ivectorint('vertexTags'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addBezier',doc,oint,ivectorint('vertexTags'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addBSpline',doc,oint,ivectorint('vertexTags'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addWire',doc,oint,ivectorint('edgeTags'),iint('tag','-1'),ibool('checkClosed','false','False'))

doc = '''TODO'''
occ.add('addLineLoop',doc,oint,ivectorint('edgeTags'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addRectangle',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('dx'),idouble('dy'),iint('tag','-1'),idouble('roundedRadius','0.'))

doc = '''TODO'''
occ.add('addDisk',doc,oint,idouble('xc'),idouble('yc'),idouble('zc'),idouble('rx'),idouble('ry'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addPlaneSurface',doc,oint,ivectorint('wireTags'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addSurfaceFilling',doc,oint,iint('wireTag'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addSurfaceLoop',doc,oint,ivectorint('faceTags'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addVolume',doc,oint,ivectorint('shellTags'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addSphere',doc,oint,idouble('xc'),idouble('yc'),idouble('zc'),idouble('radius'),iint('tag','-1'),idouble('angle1','-M_PI/2','-pi/2'),idouble('angle2','M_PI/2','pi/2'),idouble('angle3','2*M_PI','2*pi'))

doc = '''TODO'''
occ.add('addBox',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('dx'),idouble('dy'),idouble('dz'),iint('tag','-1'))

doc = '''TODO'''
occ.add('addCylinder',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('dx'),idouble('dy'),idouble('dz'),idouble('r'),iint('tag','-1'),idouble('angle','2*M_PI','2*pi'))

doc = '''TODO'''
occ.add('addCone',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('dx'),idouble('dy'),idouble('dz'),idouble('r1'),idouble('r2'),iint('tag','-1'),idouble('angle','2*M_PI','2*pi'))

doc = '''TODO'''
occ.add('addWedge',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('dx'),idouble('dy'),idouble('dz'),iint('tag','-1'),idouble('ltx','0.'))

doc = '''TODO'''
occ.add('addTorus',doc,oint,idouble('x'),idouble('y'),idouble('z'),idouble('r1'),idouble('r2'),iint('tag','-1'),idouble('angle','2*M_PI','2*pi'))

doc = '''TODO'''
occ.add('addThruSections',doc,oint,ivectorint('wireTags'),ovectorpair('outDimTags'),iint('tag','-1'),ibool('makeSolid','true','True'),ibool('makeRuled','false','False'))

doc = '''TODO'''
occ.add('addThickSolid',doc,oint,iint('solidTag'),ivectorint('excludeFaceTags'),idouble('offset'),ovectorpair('outDimTags'),iint('tag','-1'))

doc = '''TODO'''
occ.add('extrude',doc,None,ivectorpair('dimTags'),idouble('dx'),idouble('dy'),idouble('dz'),ovectorpair('outDimTags'),ivectorint('numElements','std::vector<int>()',"[]"),ivectordouble('heights','std::vector<double>()',"[]"),ibool('recombine','false','False'))

doc = '''TODO'''
occ.add('revolve',doc,None,ivectorpair('dimTags'),idouble('x'),idouble('y'),idouble('z'),idouble('ax'),idouble('ay'),idouble('az'),idouble('angle'),ovectorpair('outDimTags'),ivectorint('numElements','std::vector<int>()',"[]"),ivectordouble('heights','std::vector<double>()',"[]"),ibool('recombine','false','False'))

doc = '''TODO'''
occ.add('addPipe',doc,None,ivectorpair('dimTags'),iint('wireTag'),ovectorpair('outDimTags'))

doc = '''TODO'''
occ.add('fillet',doc,None,ivectorint('regionTags'),ivectorint('edgeTags'),idouble('radius'),ovectorpair('outDimTags'),ibool('removeRegion','true','True'))

doc = '''TODO'''
occ.add('booleanUnion',doc,None,ivectorpair('objectDimTags'),ivectorpair('toolDimTags'),ovectorpair('outDimTags'),ovectorvectorpair('outDimTagsMap'),iint('tag','-1'),ibool('removeObject','true','True'),ibool('removeTool','true','True'))

doc = '''TODO'''
occ.add('booleanIntersection',doc,None,ivectorpair('objectDimTags'),ivectorpair('toolDimTags'),ovectorpair('outDimTags'),ovectorvectorpair('outDimTagsMap'),iint('tag','-1'),ibool('removeObject','true','True'),ibool('removeTool','true','True'))

doc = '''TODO'''
occ.add('booleanDifference',doc,None,ivectorpair('objectDimTags'),ivectorpair('toolDimTags'),ovectorpair('outDimTags'),ovectorvectorpair('outDimTagsMap'),iint('tag','-1'),ibool('removeObject','true','True'),ibool('removeTool','true','True'))

doc = '''TODO'''
occ.add('booleanFragments',doc,None,ivectorpair('objectDimTags'),ivectorpair('toolDimTags'),ovectorpair('outDimTags'),ovectorvectorpair('outDimTagsMap'),iint('tag','-1'),ibool('removeObject','true','True'),ibool('removeTool','true','True'))

doc = '''TODO'''
occ.add('translate',doc,None,ivectorpair('dimTags'),idouble('dx'),idouble('dy'),idouble('dz'))

doc = '''TODO'''
occ.add('rotate',doc,None,ivectorpair('dimTags'),idouble('x'),idouble('y'),idouble('z'),idouble('ax'),idouble('ay'),idouble('az'),idouble('angle'))

doc = '''TODO'''
occ.add('dilate',doc,None,ivectorpair('dimTags'),idouble('x'),idouble('y'),idouble('z'),idouble('a'),idouble('b'),idouble('c'))

doc = '''TODO'''
occ.add('symmetry',doc,None,ivectorpair('dimTags'),idouble('a'),idouble('b'),idouble('c'),idouble('d'))

doc = '''TODO'''
occ.add('copy',doc,None,ivectorpair('dimTags'),ovectorpair('outDimTags'))

doc = '''TODO'''
occ.add('remove',doc,None,ivectorpair('dimTags'),ibool('recursive','false','False'))

doc = '''TODO'''
occ.add('removeAllDuplicates',doc,None)

doc = '''TODO'''
occ.add('importShapes',doc,None,istring('fileName'),ovectorpair('outDimTags'),ibool('highestDimOnly','true','True'),istring('format','""'))

doc = '''Sets a mesh size constraint on the geometrical entities `dimTags'. Currently only entities of dimension 0 (points) are handled.'''
occ.add('setMeshSize',doc,None,ivectorpair('dimTags'),idouble('size'))

doc = '''Synchronize the internal OpenCASCADE CAD representation with the current Gmsh model. This can be called at any time, but since it involves a non trivial amount of processing, the number of synchronization points should normally be minimized.'''
occ.add('synchronize',doc,None)

view = gmsh.add_module('view','Post-processing view functions')

doc = '''Adds a new post-processing view, with name `name'. If `tag' is positive use it (and remove the view with that tag if it already exists), otherwise associate a new tag. Returns the view tag.'''
view.add('add',doc,oint,istring('name'),iint('tag','-1'))

doc = '''Removes the view with tag `tag'.'''
view.add('remove',doc,None,iint('tag'))

doc = '''Gets the index of the view with tag `tag' in the list of currently loaded views. This dynamic index (it can change when views are removed) is used to access view options with the gmshOption functions.'''
view.add('getIndex',doc,oint,iint('tag'))

doc = '''Gets the tags of all views.'''
view.add('getTags',doc,None,ovectorint('tags'))

doc = '''Adds model-based post-processing data to the view with tag `tag'. `modelName' identifies the model the data is attached to. `dataType' specifies the type of data, currently either "NodeData", "ElementData" or "ElementNodeData". `tags' gives the tags of the vertices or elements in the mesh to which the data is associated. `data' is a vector of length `tags.size()`: each entry is the vector of double precision numbers representing the data associated with the corresponding tag. The optional `step` and `time` arguments associate a time step and time value with the data. `numComponents' gives the number of data components (1 for scalar data, 3 for vector data, etc.) per entity; if negative, it is automatically inferred (when possible) from the input data. `partition' allows to specify data in several sub-sets.'''
view.add('addModelData',doc,None,iint('tag'),istring('modelName'),istring('dataType'),ivectorint('tags'),ivectorvectordouble('data'),iint('step','0'),iint('time','0.'),iint('numComponents','-1'),iint('partition','0'))

doc = '''Adds list-based post-processing data to the view with tag `tag'. `type' identifies the data: "SP" for scalar points, "VP", for vector points, etc. `numEle' gives the number of elements in the data. `data' contains the data for the `numEle' elements.'''
view.add('addListData',doc,None,iint('tag'),istring('type'),iint('numEle'),ivectordouble('data'))

doc = '''Probes the view `tag' for its `value' at point (`x', `y', `z').'''
view.add('probe',doc,None,iint('tag'),idouble('x'),idouble('y'),idouble('z'),ovectordouble('value'),iint('step','-1'),iint('numComp','-1'),ibool('gradient','false','False'),idouble('tolerance','0.'),ivectordouble('xElemCoord','std::vector<double>()',"[]"),ivectordouble('yElemCoord','std::vector<double>()',"[]"),ivectordouble('zElemCoord','std::vector<double>()',"[]"))

doc = '''Writes the view to a file. The export format is determined by the file extension.'''
view.add('write',doc,None,iint('tag'),istring('fileName'),ibool('append','false','False'))

plugin = gmsh.add_module('plugin','Plugin functions')

doc = '''Sets the numerical option `option` to the value `value' for plugin `name'.'''
plugin.add('setNumber',doc,None,istring('name'),istring('option'),idouble('value'))

doc = '''Sets the string option `option` to the value `value' for plugin `name'.'''
plugin.add('setString',doc,None,istring('name'),istring('option'),istring('value'))

doc = '''Runs the plugin `name'.'''
plugin.add('run',doc,None,istring('name'))

api.write_cpp()
api.write_c()
api.write_python()

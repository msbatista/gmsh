// Gmsh - Copyright (C) 1997-2014 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <gmsh@geuz.org>.
//

#ifndef _POINTINSERTION_H_
#define _POINTINSERTION_H_



#include "STensor3.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class GFace;
class GRegion;
class MVertex;

using namespace std;

extern bool old_algo_hexa();


class Filler2D{
  public:
    Filler2D();
    ~Filler2D();
    void pointInsertion2D(GFace* gf, std::vector<MVertex*> &packed, std::vector<SMetric3> &metrics );
  private:
    static double time_bgm_and_smoothing,time_insertion;
};


class Filler3D{
  private:
    static std::vector<MVertex*> new_vertices;// these are used in meshGRegion.cpp using static !!!
    static double time_smoothing,time_insert_points, time_meshing;
  public:
    Filler3D();
    ~Filler3D();
    virtual bool treat_region(GRegion*);
    static int get_nbr_new_vertices();
    static MVertex* get_new_vertex(int);
};






//template<class T>
//bool readValue(string filename, string keystr, T &value){
//  ifstream in(filename.c_str());
//  if (!in.is_open()){
//    cerr << "Can't open file " << filename << endl;
//    throw;
//    return false;
//  }
//  string name;
//
//  bool found=false;
//  while (!(in.eof())){
//    in.ignore(100,'$');
//    in >> name;
//    if (in.eof()) break;
//    if (!name.compare(keystr.c_str())){// strings are equals
//      found=true;
//      in >> value;
//    }
//  }
//  in.close();
//  return found;
//}


#endif

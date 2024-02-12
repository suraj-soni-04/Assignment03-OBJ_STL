#pragma once
#include <string>
#include <vector>
#include<unordered_map>
#include ".\Triangle.h"
using namespace std;

class STLWriter
{
public:
    void fileWriter(string filePath,vector<Point3D> &points,vector<Triangle> &triangles,unordered_map<int,Point3D> &mapping);
};

#pragma once
#include<vector>
#include<string>
#include".\Point3D.h"
#include".\Triangle.h"
using namespace std;
class ObjWriter
{
    public:
        void fileWriter(string ,vector<Point3D>&, vector<Triangle> &);
};
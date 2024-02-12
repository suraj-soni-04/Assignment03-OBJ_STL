#pragma once
#include<vector>
#include<map>
#include".\Triangle.h"
#include".\Point3D.h"
using namespace std;
class Triangulation
{
    public:
        vector<Triangle> getTriangles() const;
        vector<Point3D> getPoints() const;
        static Triangulation * getInstance() const;
        
    private:
        vector<Triangle> mTraingles;
        vector<Point3D> mUnique3DPoints;
        static Triangulation *triangulation;

        Triangulation();

        Triangulation(const Triangulation&other)=delete; //cc
        Triangulation& operator=(const Triangulation&other)=delete;
};

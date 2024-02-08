#pragma once
#include<vector>
#include<map>
#include".\Triangle.h"
#include".\Point3D.h"
using namespace std;
class Triangulation
{
    public:
        Triangulation();
        ~Triangulation();
        vector<Triangle>& getTriangles() const;
        vector<Point3D>& getPoints() const;
    private:
        vector<Triangle> mTraingles;
        vector<Point3D> mUnique3DPoints;
};

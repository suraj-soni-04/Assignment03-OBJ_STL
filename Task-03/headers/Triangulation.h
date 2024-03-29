#pragma once
#include<.\Triangle.h>
#include<.\Point3D.h>
#include<vector>
#include<map>
using namespace std;
class Triangulation
{
    public:
        Triangulation();
        ~Triangulation();
        vector<Triangle>& getTriangles() const;
        vector<Point3D>& getPoints() const;
        vector<Point3D>& getUniqueNormals() const;

    private:
        vector<Triangle> mTraingles;
        vector<Point3D> mUnique3DPoints;
        vector<Point3D> mUniqueNormals;
};
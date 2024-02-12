#include <iostream>
#include <map>
#include <vector>
#include "..\headers\Triangulation.h"
using namespace std;

Triangulation *Triangulation::triangulation=nullptr;

Triangulation* Triangulation::getInstance()
{
    if(triangulation==nullptr) triangulation=new Triangulation();
    return triangulation;
}
vector<Triangle> Triangulation::getTriangles() const
{
    return this->mTraingles;
}
vector<Point3D>  Triangulation::getPoints() const
{
    return this->mUnique3DPoints;
}
Triangulation::Triangulation()
{
}
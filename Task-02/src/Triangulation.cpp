#include <iostream>
#include <map>
#include <vector>
#include "..\headers\Triangulation.h"
using namespace std;

Triangulation::Triangulation()
{

}
Triangulation::~Triangulation()
{

}
vector<Triangle>& Triangulation::getTriangles() const
{
    return this->mTraingles;
}
vector<Point3D>& Triangulation::getPoints() const
{
    return this->mUnique3DPoints;
}
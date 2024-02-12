#include <iostream>
#include <vector>
#include "..\headers\Triangulation.h"
using namespace std;
Triangulation::Triangulation()
{

}
Triangulation::~Triangulation()
{

}
vector<Triangle>& Triangulation::getTriangles()
{
    return this->mTraingles;
}
vector<Point3D>& Triangulation::getPoints()
{
    return this->mUnique3DPoints;
}

#include <iostream>
#include "..\headers\Cube.h"
#include "..\headers\Point3D.h"
using namespace std;
Cube::Cube()
{
    this->mSide = 0.0;
}
Cube::Cube(double side,Point3D point3D)
{
    this->mSide = side;
    this->mPoint3D=point3D;
}
Cube::~Cube()
{
}
double Cube::getVolume() const
{
    return this->mSide * this->mSide * this->mSide;
}

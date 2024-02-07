#include <..\headers\Cubiod.h>
#include <..\headers\Point3D.h>
#include <iostream>
using namespace std;
Cubiod::Cubiod()
{
    this->mLength = 0.0;
    this->mBreadth = 0.0;
    this->mHeight = 0.0;
}
Cubiod::Cubiod(double length, double breadth, double height, Point3D point3D)
{
    this->mLength = length;
    this->mBreadth = breadth;
    this->mHeight = height;
    this->mPoint3D = point3D;
}
Cubiod::~Cubiod()
{
}
double Cubiod::getVolume()
{
    return this->mLength * this->mBreadth * this->mHeight;
}

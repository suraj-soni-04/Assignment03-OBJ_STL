#include <iostream>
#include <math.h>
#include "..\headers\Sphere.h"
#include "..\headers\Point3D.h"
using namespace std;

Sphere::Sphere()
{
    this->mRadius=0.0;
}
Sphere::Sphere(double radius,Point3D point3D)
{
    this->mRadius=radius;
    this->mPoint3D=point3D;
}
Sphere::~Sphere()
{
}
double Sphere::getVolume() const
{
    return (4*M_PI*this->mRadius*this->mRadius*this->mRadius)/3;
}

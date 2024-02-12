#pragma once
#include ".\Point3D.h"
class Sphere
{
public:
    Sphere();
    Sphere(double,Point3D);
    ~Sphere();
    double getVolume() const;

private:
    double mRadius;
    Point3D mPoint3D;
};

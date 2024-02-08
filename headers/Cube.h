#include".\Point3D.h"
#pragma once
class Cube
{
public:
    Cube(); 
    Cube(double,Point3D);
    ~Cube();
    double getVolume() const;
private:
    double mSide;
    Point3D mPoint3D;
};
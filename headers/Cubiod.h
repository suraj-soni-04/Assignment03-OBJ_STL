#include".\Point3D.h"
#pragma once
class Cubiod
{
public:
    Cubiod();
    Cubiod(double,double,double,Point3D);
    ~Cubiod();
    double getVolume();

private:
    int mLength;
    int mBreadth;
    int mHeight;
    Point3D mPoint3D;
};

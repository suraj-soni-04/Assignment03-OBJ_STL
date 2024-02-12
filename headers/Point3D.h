#pragma once
class Point3D
{
public:
    Point3D();
    Point3D(double x, double y, double z);
    ~Point3D();

    void setmX(double);
    void setmY(double);
    void setmZ(double);

    double getMX() const;
    double getMY() const;
    double getMZ() const;

private:
    double mX;
    double mY;
    double mZ;
};

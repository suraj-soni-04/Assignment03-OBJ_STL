#include <iostream>
#include <math.h>
#include "..\headers\Triangle.h"
#include "..\headers\Point3D.h"
using namespace std;

Triangle::Triangle(int vertex1, int vertex2, int vertex3)
{
    this->mVertex1 = vertex1;
    this->mVertex2 = vertex2;
    this->mVertex3 = vertex3;
}
Triangle::~Triangle()
{
}

int Triangle::getVertex1() const
{
    return this->mVertex1;
}
int Triangle::getVertex2() const
{
    return this->mVertex2;
}
int Triangle::getVertex3() const
{
    return this->mVertex3;
}
int Triangle::getNormalIndex() const
{
    return this->mNormalIndex;
}

void Triangle::setMvertex1(int x)
{
    this->mVertex1=x;
}
void Triangle::setMvertex2(int y)
{
    this->mVertex2=y;
}
void Triangle::setMvertex3(int z)
{
    this->mVertex3=z;
}
void Triangle::setMnormalIndex(int normalIndex)
{
    this->mNormalIndex=normalIndex;
}
#pragma once
class Triangle
{
public:
    Triangle();
    Triangle(int , int , int );
    ~Triangle();

    int getVertex1() const;
    int getVertex2() const;
    int getVertex3() const;

    void setMvertex1(int);
    void setMvertex2(int);
    void setMvertex3(int);

private:
    int mVertex1;
    int mVertex2;
    int mVertex3;
};

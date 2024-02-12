#pragma once
#include <string>
#include <vector>
#include<string>
#include <unordered_map>
#include ".\Triangle.h"
using namespace std;


class STLWriter
{
public:
    void fileWriter(string , Triangulation *, unordered_map<int, Point3D> &);
    static STLWriter* getInstance();
private:
    STLWriter();
    ~STLWriter();
    
    STLWriter(const STLWriter &other)=delete;
    STLWriter& operator=(const STLWriter&other)=delete;
    
    static STLWriter *stlWriter;
};

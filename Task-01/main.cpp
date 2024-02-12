#include <iostream>
#include <unordered_map>
#include <thread>
#include <chrono>
#include <windows.h>
#include <string.h>
#include ".\headers\Point3D.h"
#include ".\headers\Triangle.h"
#include ".\headers\Triangulation.h"
#include ".\headers\STLWriter.h"
#include ".\headers\STLReader.h"

using namespace std;
int main()
{
    string inputFile = "..\\stlFiles\\cube.stl";
    string outputFile = "..\\outputFile\\file.txt";

    STLReader *stlReader=STLReader::getInstance();
    STLWriter *stlWriter=STLWriter::getInstance();
    Triangulation *triangulation=Triangulation::getInstance();

    unordered_map<int, Point3D> mapping;
    vector<Point3D> uniquePoints;
    vector<Triangle> uniqueTriangles;

    stlReader->fileReader(inputFile,triangulation , mapping);

    cout << "*** END ***" << endl;
    return 0;
    }
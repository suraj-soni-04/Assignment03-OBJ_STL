#include <iostream>
#include <unordered_map>
#include <thread>
#include <chrono>
#include <windows.h>
#include <string.h>
#include <..\headers\Cube.h>
#include <..\headers\Cubiod.h>
#include <..\headers\Point3D.h>
#include <..\headers\Sphere.h>
#include <..\headers\Triangle.h>
#include <..\headers\Triangulation.h>
#include <..\headers\STLWriter.h>
#include <..\headers\STLReader.h>
#include <..\headers\OBJWriter.h>
#include <..\headers\OBJReader.h>
#include <..\headers\STLtoOBJ.h>
#include <..\headers\OBJToSTL.h>

using namespace std;
int main()
{
     int ch;
    while (1)
    {
        cout << "1. Convert File (.STL --->.OBJ)" << endl;
        cout << "2. Convert File (.OBJ --->.STL)" << endl;
        cout << "3. Open .STL file in GNUPLOT" << endl;
        cout << "4. Open .OBJ file in GNUPLOT" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        if (ch == 1)
        {
            STLtoOBJConverter stlToObjConvertor;
            string fromStlFilePath = "..\\stlFiles\\cube.stl";
            string toObjFilePath = ".\\convertedObjFiles\\cube.obj";
            cout << "Reading '.stl' file..." << endl;
            Sleep(3000);
            cout << "Converting to '.obj' file" << endl;
            Sleep(5000);
            stlToObjConvertor.stlToObjConvertor(fromStlFilePath, toObjFilePath);
            Sleep(2000);
            cout << "Conversion Completed on the given path!" << endl;
            cout << "\n";
        }
        else if (ch == 2)
        {
            OBJtoSTLConverter objToStlConvertor;
            string fromObjFilePath = "..\\objFiles\\cube.obj";
            string toStlFilePath = "..\\convertedStlFiles\\cube.stl";
            cout << "Reading '.obj' file..." << endl;
            Sleep(3000);
            cout << "Converting to '.stl' file" << endl;
            Sleep(5000);
            objToStlConvertor.objToStlConvertor(fromObjFilePath, toStlFilePath);
            Sleep(2000);
            cout<<"** DONE **"<<endl;
            cout << "Conversion Completed on the given path!" << endl;
            cout << "\n";
        }
        else if (ch == 3)
        {
            string inputFile = "..\\stlFiles\\cube.stl";
            string outputFile = "..\\txtFiles\\file.txt";

            STLReader stlReader;
            STLWriter stlWriter;
            Triangulation triangulation;

            vector<Triangle> triangles = triangulation.getTriangles();
            vector<Point3D> points = triangulation.getPoints();

            unordered_map<int, Point3D> mapping;
            vector<Point3D> uniquePoints;
            vector<Triangle> uniqueTriangles;

            cout << "*** STARTED ***" << endl;
            Sleep(3000);
            cout << "Processing the '.stl' file...." << endl;
            Sleep(5000);
            stlReader.fileReader(inputFile, points, triangles, mapping);
            Sleep(3000);
            cout << "'.stl' file processed!..." << endl;
            cout << "Converting to '.txt' file" << endl;
            Sleep(5000);
            stlWriter.fileWriter(outputFile, points, triangles, mapping);
            cout << "*** END ***" << endl<<endl;
        }
        else if (ch == 4)
        {
            string inputFile = "..\\objFiles\\cube.obj";
            string outputFile = "..\\txtFiles\\file.txt";

            ObjReader objReader;
            ObjWriter objWriter;
            Triangulation triangulation;
            vector<Point3D> uniquePoints = triangulation.getPoints();
            vector<Triangle> triangles = triangulation.getTriangles();

            cout << "*** STARTED ***" << endl;
            Sleep(3000);
            cout << "Processing the '.obj' file...." << endl;
            Sleep(5000);
            objReader.fileReader(inputFile, uniquePoints, triangles);
            Sleep(3000);
            cout << "'.obj' file processed!..." << endl;
            cout << "Converting to '.txt' file" << endl;
            Sleep(5000);
            objWriter.fileWriter(outputFile, uniquePoints, triangles);
            cout << "*** END ***" << endl<<endl;

        }
        else if (ch == 5) break;
        else
        {
            cout << "Invalid Choice..." << endl;
            continue;
        }
    }
    return 0;
}
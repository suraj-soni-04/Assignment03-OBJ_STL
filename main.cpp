#include <iostream>
#include <unordered_map>
#include <chrono>
#include <windows.h>
#include <string.h>
#include ".\headers\Cube.h"
#include ".\headers\Cubiod.h"
#include ".\headers\Point3D.h"
#include ".\headers\Sphere.h"
#include ".\headers\Triangle.h"
#include ".\headers\Triangulation.h"
#include ".\headers\STLWriter.h"
#include ".\headers\STLReader.h"
#include ".\headers\OBJWriter.h"
#include ".\headers\OBJReader.h"
#include ".\headers\STLtoOBJ.h"
#include ".\headers\OBJToSTL.h"

int main() {
    int choice;
    while (true) {
        std::cout << "1. Convert File (.STL --->.OBJ)" << std::endl;
        std::cout << "2. Convert File (.OBJ --->.STL)" << std::endl;
        std::cout << "3. Open .STL file in GNUPLOT" << std::endl;
        std::cout << "4. Open .OBJ file in GNUPLOT" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice : ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                STLtoOBJConverter stlToObjConvertor;
                std::string fromStlFilePath = ".\\stlFiles\\cube.stl";
                std::string toObjFilePath = ".\\convertedObjFiles\\cube.obj";
                std::cout << "Reading '.stl' file..." << std::endl;
                Sleep(3000);
                std::cout << "Converting to '.obj' file" << std::endl;
                Sleep(5000);
                stlToObjConvertor.stlToObjConvertor(fromStlFilePath, toObjFilePath);
                Sleep(2000);
                std::cout << "Conversion Completed on the given path!" << std::endl;
                std::cout << "\n";
                break;
            }
            case 2: {
                OBJtoSTLConverter objToStlConvertor;
                std::string fromObjFilePath = ".\\objFiles\\cube.obj";
                std::string toStlFilePath = ".\\convertedStlFiles\\cube.stl";
                std::cout << "Reading '.obj' file..." << std::endl;
                Sleep(3000);
                std::cout << "Converting to '.stl' file" << std::endl;
                Sleep(5000);
                objToStlConvertor.objToStlConvertor(fromObjFilePath, toStlFilePath);
                Sleep(2000);
                std::cout << "** DONE **" << std::endl;
                std::cout << "Conversion Completed on the given path!" << std::endl;
                std::cout << "\n";
                break;
            }
            case 3: {
                std::string inputFile = ".\\stlFiles\\cube.stl";
                std::string outputFile = ".\\txtFiles\\file.txt";

                STLReader stlReader;
                STLWriter stlWriter;
                Triangulation triangulation;

                std::vector<Triangle> triangles = triangulation.getTriangles();
                std::vector<Point3D> points = triangulation.getPoints();

                std::unordered_map<int, Point3D> mapping;
                std::vector<Point3D> uniquePoints;
                std::vector<Triangle> uniqueTriangles;

                std::cout << "*** STARTED ***" << std::endl;
                Sleep(3000);
                std::cout << "Processing the '.stl' file...." << std::endl;
                Sleep(5000);
                stlReader.fileReader(inputFile, points, triangles, mapping);
                Sleep(3000);
                std::cout << "'.stl' file processed!..." << std::endl;
                std::cout << "Converting to '.txt' file" << std::endl;
                Sleep(5000);
                stlWriter.fileWriter(outputFile, points, triangles, mapping);
                std::cout << "*** END ***" << std::endl << std::endl;
                break;
            }
            case 4: {
                std::string inputFile = "..\\objFiles\\cube.obj";
                std::string outputFile = "..\\txtFiles\\file.txt";

                ObjReader objReader;
                ObjWriter objWriter;
                Triangulation triangulation;
                std::vector<Point3D> uniquePoints = triangulation.getPoints();
                std::vector<Triangle> triangles = triangulation.getTriangles();

                std::cout << "*** STARTED ***" << std::endl;
                Sleep(3000);
                std::cout << "Processing the '.obj' file...." << std::endl;
                Sleep(5000);
                objReader.fileReader(inputFile, uniquePoints, triangles);
                Sleep(3000);
                std::cout << "'.obj' file processed!..." << std::endl;
                std::cout << "Converting to '.txt' file" << std::endl;
                Sleep(5000);
                objWriter.fileWriter(outputFile, uniquePoints, triangles);
                std::cout << "*** END ***" << std::endl << std::endl;
                break;
            }
            case 5:
                return 0;
            default:
                std::cout << "Invalid Choice..." << std::endl;
                continue;
        }
    }
}

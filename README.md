# Assignment03-OBJ_STL
This repository contains the following directories:

1. **Task-01**: STL file reader code.
2. **Task-02**: OBJ file reader code.
3. **Task-03**: OBJ to STL file convertor code.
4. **Task-04**: STL to OBJ file convertor code.
    
         
<hr></hr>


**Cube.cpp** : 
This C++ file defines a class Cube representing a cube geometry. It stores the side length (mSide) and a 3D point (mPoint3D). Constructors initialize the cube with side length and point. The getVolume() method calculates and returns the cube's volume.

**Cuboid.cpp** :
This C++ file defines a class Cuboid representing a cuboid geometry. It stores the length (mLength), breadth (mBreadth), height (mHeight), and a 3D point (mPoint3D). Constructors initialize the cuboid with dimensions and point. The getVolume() method calculates and returns the cuboid's volume.

**OBJtoSTL.cpp** :
This C++ function objToStlConvertor converts an OBJ file to an STL file. It reads OBJ data using an ObjReader, triangulates the geometry with Triangulation, and writes it to a temporary text file using an ObjWriter. Then, it reads the temporary file, interprets the data, and writes it to the specified STL file. The function handles errors related to file operations and incomplete input for triangles.

**ObjReader.cpp** :
This C++ function fileReader reads an OBJ file and populates vectors of Point3D and Triangle objects. It parses each line of the file, identifying whether it represents a vertex or a face (f). For each vertex line (v), it extracts the coordinates and creates a Point3D object, which is then stored in the uniquePoints vector. For each face line (f), it extracts the vertex indices, creates a Triangle object, and stores it in the triangles vector. The function handles errors related to file opening and parsing.

**ObjWriter.cpp** :
This C++ function fileWriter writes data to an OBJ file. It takes a file path, a vector of Point3D objects (uniquePoints), and a vector of Triangle objects (triangles) as input. For each triangle in the triangles vector, it retrieves the corresponding vertices from the uniquePoints vector and writes their coordinates to the output file. The function handles errors related to file opening.

**Point3D.cpp** :
This C++ file defines a class Point3D representing a point in three-dimensional space. It includes constructors to initialize the coordinates of the point, as well as getters and setters for each coordinate (mX, mY, mZ). The default constructor sets the coordinates to (0.0, 0.0, 0.0). The class encapsulates the properties and behavior of a 3D point.

**STLReader.cpp** :
This C++ function fileReader serves to parse an STL file, extracting vertex data to populate vectors of Point3D and Triangle objects. It iterates through each line of the file, identifying lines that contain vertex information. Upon finding such lines, it extracts the vertex coordinates and creates corresponding Point3D objects. These points are then evaluated against an existing mapping to ensure uniqueness. If a point is not already mapped, it is added to both the points vector and the mapping unordered map. Once three vertices are collected, representing a complete triangle, their indices in the mapping are determined and used to create a Triangle object, which is then added to the triangles vector. The function utilizes a custom Comparator class to compare Point3D objects based on their coordinates.

**STLWriter.cpp** :
This C++ function fileWriter writes data to an STL file. It takes input parameters such as the file path, vectors of points and triangles, and an unordered map. It iterates over each triangle, retrieves corresponding vertices from the map, and writes their coordinates to the output file. Finally, it closes the output file.

**STLtoOBJ.cpp** :
This C++ function stlToObjConvertor converts an STL file to an OBJ file. It utilizes STLReader to read the STL file, Triangulation to generate triangles, and STLWriter to write the data to a temporary text file. Then, it opens the temporary file, reads the vertices and triangles, and writes them to the output OBJ file.

**Sphere.cpp** :
This C++ file defines a class Sphere representing a sphere in three-dimensional space. It includes constructors to initialize the sphere with a radius and a 3D point. The class encapsulates methods to calculate and retrieve the volume of the sphere based on its radius.

**Triangle.cpp** :
This C++ file defines a class Triangle representing a triangle in three-dimensional space. It includes a constructor to initialize the triangle with three vertex indices. The class encapsulates methods to retrieve the indices of each vertex.

**Triangulation.cpp** :
This C++ file defines a class Triangulation responsible for managing triangulated geometry. It includes constructors and destructors without any specific functionality. The class provides methods to access the vector of triangles (mTriangles) and the vector of unique 3D points (mUnique3DPoints).

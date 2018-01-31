//
//  FileController.hpp
//  DataStructures
//
//  Created by Woolsey, Adam on 1/31/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
};

#endif /* FileController_hpp */

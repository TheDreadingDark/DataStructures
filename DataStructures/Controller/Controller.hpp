//
//  Controller.hpp
//  DataStructures
//
//  Created by Woolsey, Adam on 1/31/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "../Model/Structures/Linear/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "../Testers/LinkedListTester.hpp"
#include "../Testers/TestingStacksAndQueues.hpp"
#include "../Testers/RecursionTester.hpp"
#include "../Testers/GraphTester.hpp"

class Controller
{
private:
    void testArray();
    void findMaxAndMin();
public:
    void start();
};

#endif /* Controller_hpp */

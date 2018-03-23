//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Woolsey, Adam on 3/23/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "../Model/Structures/NonLinear/Graph.hpp"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void finCheapestTraversal();
public:
    void testGraphs();
};

#endif /* GraphTester_hpp */

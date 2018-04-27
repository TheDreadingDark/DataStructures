//
//  Hashtable.hpp
//  DataStructures
//
//  Created by Woolsey, Adam on 4/27/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include "../Nodes/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(HashNode<Type>* insertedNode, long index);
    
public:
    Hastable();
    ~Hashtable();
    
    void insert(Type data);
    long getSize();
};



#endif /* Hashtable_hpp */

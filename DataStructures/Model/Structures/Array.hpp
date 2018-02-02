//
//  Array.hpp
//  DataStructures
//
//  Created by Woolsey, Adam on 2/2/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    //Constructor
    Array<Type>(int size);
    
    //Copy Constructor
    Array<Type>(const Array<Type> & toCopy);
    //Destrucor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new Type[size];
}

template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
    this->size = toCopy.getSize();
    
    //Build Data Structure
    internalArray = new Type[size];
    
    for(int index = 0; index < size; index++)
    {
        internalArray[index] = toCopy[index];
    }
}

template <class Type>
Array<Type> :: ~Array()
{
    delete [] internalArray;
}

template <class Type>
Array<Type> & Array<Type> :: operator = (const Array <Type> & toAssign)
{
    if (&toAssign != this)
    {
        if (size != toAssign.getSize())
        {
            delete [] internalArray;
            size = toAssign.getSize();
            internalArray = new Type [size];
            
        for (int index = 0; index < size; index++)
        {
            internalArray[index] = toAssign[index];
        }
            
    }
    return *this;
}
    
template <class Type> //Left hand of = sign -- assigns to references
Type & Array<Type> :: operator [] (int index)
{
    assert(index >= 0 && index < size);
    return interanlArray[index];
}
    
template <class Type> //Right hand of = sign -- copy
Type Array<Type> :: operator [] (int index) const
{
    assert(index >= && index < size);
    return internalArray[index];
}
    
template <class Type>
int Array<Type> :: getSize() const
{
    return size;
}
    
template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >=0 && index < size);
    
    Type value = internalArray[index];
    
    return value;
}
    
template <class Type>
void Array<Type> :: setAtIndex(int pos, Type item)
{
    assert(pos >= 0 && pos < size);
    
    Type value = internalArray[index];
    
    return value;
}
    
template <class Type>
void Array<Type> :: setAtIndex(int pos, Type item)
{
    assert(pos >= 0 && pos < size);
    internalArray[pos] = item;
}

#endif /* Array_hpp */

//
//  Node.hpp
//  DataStructures
//
//  Created by Woolsey, Adam on 2/6/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    Type data;
    LinearNode<Type> * next;
public:
    //Constructors
    Node();
    Node (Type data);
    void setData (Type data);
    Type getData();
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

//Constructors

/**
 This constructor is used for building the raw structure before values are known.
 */
template <class Type>
Node<Type> :: Node()
{
    //Needed for default constructor compilation
    //Since when we create a structure it does not have an item to stor yet.
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next = nullptr;
}

/**
 This constructor is used to create a reference to an instance with data.
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

/**
 This constructor is used to create a reference to an instance with data and a known link.
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

//Accessor methods

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer )
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}

#endif /* Node_hpp */

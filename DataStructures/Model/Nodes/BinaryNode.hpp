//
//  BinaryNode.hpp
//  DataStructures
//
//  Created by Woolsey, Adam on 3/27/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#ifndef BinaryNode_hpp
#define BinaryNode_hpp

#include <stdio.h>

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setRightNode(BinaryTreeNode<Type> * right);
    void setLeftNode(BinaryTreeNode<Type> * left);
    
    BinaryTreeNode<Type> * getRoot();
    BinaryTreeNode<Type> * getLeft();
    BinaryTreeNode<Type> * getRight();
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this->right;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
    return this->left;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> * root()
{
    this->next = nextNodePointer;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> * left()
{
    this->next = nextNodePointer;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> * right()
{
    this->next = nextNodePointer;
}

#endif /* BinaryNode_hpp */

// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.
// 05/13/2022 pragma once modification by Prof Sipantzi
// This is the file to include for access to the complete binary node
// template implementation

#include "book.h"
#include "BinNode.h"

#pragma once

// Simple binary tree node implementation
template <typename Key, typename E>
class BSTNode : public BinNode<E> {
private:
  Key k;                  // The node's key
  E it;                   // The node's value
  BSTNode* lc;            // Pointer to left child
  BSTNode* rc;            // Pointer to right child
  unsigned int lb : 1;    //bit field for thread or regular pointer for left pointer; 1 represents its a thread, 0 represents the pointer is regular
  unsigned int rb : 1;    //bit field for thread or regular pointer for right pointer; 1 represents that it is a thread, 0 represents the pointer is regular

public:
  // Two constructors -- with and without initial values
  BSTNode() { lc = rc = NULL; }
  BSTNode(Key K, E e, BSTNode* l =NULL, BSTNode* r =NULL)
  {
      k = K; it = e; lc = l; rc = r; lb = 1;rb = 1;
  }
  ~BSTNode() {}             // Destructor

  // Functions to set and return the value and key
  E& element() override { return it; }
  void setElement  (const E& e) override { it = e; }
  Key& key() { return k; }
  void setKey(const Key& K) { k = K; }

  // Functions to set and return the children
  inline BSTNode* left() const override { return lc; }
  void setLeft(BinNode<E>* b) override {
      lc = (BSTNode*)b;
      
  }
  inline BSTNode* right() const override { return rc; }
  void setRight(BinNode<E>* b) override {
      rc = (BSTNode*)b;
      
  }
  void setLeftBit(unsigned int i)//sets left bit thread indicator
  {
      lb = i;
  }
  void setRightBit(unsigned int i)//sets right bit thread indicator
  {
      rb = i;
  }
  int getRightBit() //returns right bit
  {
      return rb;
  }
  int getLeftBit()//returns left bit
  {
      return lb;
  }

  // Return true if it is a leaf, false otherwise
  bool isLeaf() override {
      return (lc == NULL) && (rc == NULL); 
  }
};

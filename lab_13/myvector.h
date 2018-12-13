
#include <iostream>
#pragma once

using std::cout;
using std::endl;


template<class T> class MyVector {
 private:
  int size;
  int capacity;
  T* data = new T[10];

 public:
  //constructor 
  MyVector();
  // contructor with params
  MyVector(int range, T value);

  ~MyVector();
  // resize
  void resize();
  // insert at index
  void insert(T value, int index);
  // delete from index
  void pop(int index);
  // insert at end
  void push_back(T value);
  // return size of vector
  int getSize();
  // return data at index
  T &operator [](int index){

    return  data[index];
  }


  
};

#include "myvector.hxx"

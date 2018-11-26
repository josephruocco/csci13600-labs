#pragma once

#include <iostream>
#include <cctype>

using std::cout;
using std::cin;
using std::string;
using std::endl;


void printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int *arr, int size);
int sumArrayInRange(int *arr, int left, int right);
bool isAlphanumeric(string s);
bool nestedParens(string s);
bool divisible(int *prices, int size);

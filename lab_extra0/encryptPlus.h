#pragma once
#include <cstring>

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <math.h>

using std::string;
using std::cout;
using std::cin;
using std::ifstream;
using std::endl;

std::string encode(std::string s, int r);
double distance(double a[], double b[], int len);
int count_letters(std::string s,  char c);
std::string decode(std::string s, double freqs[]);
double* generateFreqs();

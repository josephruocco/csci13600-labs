#pragma once

#include <string>

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

const int MAX_H = 512;
const int MAX_W = 512;
const int DUB_MAX_H = 1024;
const int DUB_MAX_W = 1024;

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;

void writeImage(string filename, int image[MAX_H][MAX_W], int height, int width);
void writeImage(string filename, int image[DUB_MAX_H][DUB_MAX_W], int height, int width);
void invert();
void invert_half();
void box();
void frame();
void scale();
void pixelate();
void readImage(int image[MAX_H][MAX_W], int &height, int &width);


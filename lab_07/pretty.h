#pragma once

#include <iostream>
#include <cctype>
#include <stdio.h>
#include <ctype.h>

#include <fstream>
#include <cstdlib>
#include <climits>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string removeLeadingSpaces(string line);
int countChar(string line, char c);

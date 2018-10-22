#pragma once
#include <cstring>
#include <iostream>
#include <cctype>

char test_ascii(std::string);
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
std::string encryptVignere(std::string plaintext, std::string keyword);
std::string decryptCaesar(std::string ciphertext,int  rshift);
std::string decryptVignere(std::string ciphertext, std::string  keyword);

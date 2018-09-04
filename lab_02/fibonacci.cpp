/*
Author: Joseph Ruocco
Course: CSCI-136
Instructor: Gennadiy Maryash
Assignment: D, Lab2

 
Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).

..

as the numbers get larger, the value of f(x) is more than 20 digits long which cannot be stored in any primitive data type in C++ thus creating an incorrect value

*/

#include <iostream>

using namespace std;

int main () 
{
	// make an array
	int fib[60];
	// first two terms are given
	fib[0] = 0;
	fib[1] = 1;
	// and all the following ones can be computed iteratively as
	 
	cout << 0 << endl;
	cout << 1 << endl;

	for (long i =2; i< 60; i++)
	{
		fib[i] = (long) fib[i-1] + fib[i-2];
		cout << fib[i] << endl;
		
	}

}









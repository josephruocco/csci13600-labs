/*
Author: Joseph Ruocco
Course: CSCI-136
Instructor: Gennadiy Maryash
Assignment: C, Lab2

 
This program creates an array of 10 integers, and provides the user with an interface to edit any of its elements. 

*/

#include <iostream>

using namespace std;

int main () 
{

	// Create an array myData of 10 integers.
	int myData[10]; 
	// Fill all its cells with value 1 (using a for loop).
	for(int i=0; i < 10; i++)
	{
		myData[i] = 1;
		// Print all elements of the array on the screen.
		cout << myData[i] << " ";
		
	}
	cout << endl;

	int index =0;
	int value =0;

	do {
		// Ask the user to input the cell index i, and its new value v.
		cout << "Please enter index" << endl;
		cin >> index ;

		// " " ... value

		cout << "Please enter value" << endl;
		cin >> value ;
		// If the index i is within the array range (0 ≤ i < 10), 
		// update the asked cell, myData[i] = v, 	
		// and go back to the step 3.
	
		if (index >= 0 && index < 10)
		{
			myData[index] = value;
			for(int b=0; b < 10; b++)
			{
				// Print all elements of the array on the screen.
				cout << myData[b] << " ";
			 
			}
		cout << endl;

		}

	}
	
	while (index >= 0 && index < 10);
	 
	cout << "Index out of bound" << endl;
	return 0;
    }









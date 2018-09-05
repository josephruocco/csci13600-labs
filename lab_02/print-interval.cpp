/*
Author: Joseph Ruocco
Course: CSCI-136
Instructor: Gennadiy Maryash
Assignment: B, Lab2

 
This program asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces. 

*/

#include <iostream>

using namespace std;

int main () {

	int lower = 0;
	int upper = 0;

	cout << "Please enter lower limit";
	cin >> lower;

	cout << "Please enter upper limit";
	cin >> upper; 

	for(int i = lower; i < upper; i++)
	{
		cout << i << " ";
	}

	
	
	return 0;

}

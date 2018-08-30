
/*
Author: Joseph Ruocco
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Task B , Lab1

 This program asks the user to input three integer numbers, and prints out the smallest of the three.
*/


#include <iostream>

using namespace std; 

int main () {


	int first_number = 0;
	int second_number = 0; 
	int third_number = 0;
	int small_temp = 0;
	// prompts user for first number 
	cout << "Enter the first number ";
	cin >> first_number;

	// prompts user for second number
	cout << "Enter the second number ";
	cin >> second_number;
	// prompts user for third number
	cout << "Enter the third number ";
	cin >> third_number;

	// compares num 1 to num 2 and stores in var temp
	if(first_number > second_number)
		small_temp = second_number; 
	else 
		small_temp = first_number; 
	// compares third num to temp and prints result
	if (third_number > small_temp)
		cout << "the smallest number is " << small_temp << endl;
	else 
		cout << "the smallest number is " << third_number << endl;

	
	return 0;

}

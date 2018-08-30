
/*
Author: Joseph Ruocco
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Task A , Lab1

 This program asks the user to input two integer numbers and prints out the smaller of the two.
*/


#include <iostream>

int main () {


	int first_number = 0;
	int second_number = 0; 
	// prompts user for first number 
	cout << "Enter the first number ";
	cin >> first_number;

	// " " second number
	cout << "Enter the second number ";
	cin >> second_number;

	// compares numbers 
	if(first_number > second_number){
		cout << "the smaller number is " << second_number << endl ; 

	}
	else {
		cout << "the smaller number is " << first_number << endl ; 
	}
	return 0;

}

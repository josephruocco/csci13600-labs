/*
Author: Joseph Ruocco
Course: CSCI-136
Instructor: Gennadiy Maryash
Assignment: A, Lab2

 
This program asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.

*/

#include <iostream>

using namespace std;

int main () {

	int number = -1; 

	while (number =< 0 || number => 100){
		cout << "Enter a number between 0 and 100" << endl;
		cin >> number;

	}

	cout << number * number ;
	
	return 0;

}

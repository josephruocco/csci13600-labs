
/*
Author: Joseph Ruocco
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Task C , Lab1

 This program asks the user to input an integer representing a year number (1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year..
*/


#include <iostream>

using namespace std; 


bool IsLeapYear (int year)
{
	// runs logic tests 
	if (year % 4 != 0) 
		return false;
	else if (year % 100 != 0) 
		return true; 
	else if (year % 400 != 0) 
		return false;
	else 
		return true;
}

int main () 
{


	int year = 0;
	 
	cout << "Enter the year ";
	cin >> year;
	// calls IsLeapYear and prints based on bool return
	if (IsLeapYear(year))
		cout << "Leap Year" << endl;
	else 
		cout << "Common Year" << endl;

	return 0;

}



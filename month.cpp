
/*
Author: Joseph Ruocco
Course: CSCI-136
Instructor: Genady Maryash
Assignment: Task D , Lab1

 This program asks asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years). 
*/


#include <iostream>


// leap year function is reused 
bool IsLeapYear (int year)
{
	if (year % 4 != 0) 
		return false;
	else if (year % 100 != 0) 
		return true; 
	else if (year % 400 != 0) 
		return false;
	else 
		return true;
}



int main () {


	int month = 0;
	int year = 0; 
	// prompts user for year
	cout << "Enter the year ";
	cin >> year;
	// prompts user for month
	cout << "Enter the month ";
	cin >> month;
	// test case for february 
	if (month != 2){

	      	// runs logic tests
		if (month <= 7 ){
			 if (month % 2 == 0)
				cout << "30 days" << endl;
			 else 
		 		cout << "31 days" << endl;
		}
		

		if (month >= 8  ) {
			 if (month % 2 == 0)
				cout << "31 days" << endl;
			 else 
		 		cout << "30 days" << endl;
		}
	 
	}

	else {
		// check if feb is leap year using IsLeapYear
		if (month == 2 && IsLeapYear(year))
			cout << "29 days" << endl;
		else 
			cout << "28 days" << endl;

	}

	return 0;

}

/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 10) Days in a Month - Pg. 221                                                *
 * Description: Write a program that asks the user to enter the month (letting  *
 * the user enter an integer in the range of 1 - 12 and the year). The program  *
 * should then display the number of days in that month. Use the following      *
 * criteria to identify leap years.                                             *
 * 1. Determine whether the year is divisible by 100. If it is, then it is a    *
 * leap year if and only if it is divisible by 400. Ex. 2000 is a leap year but *
 * 2100 is not.                                                                 *
 * 2. If the year is not divisible by 100, then it is a leap year if and only if*
 * it is divisible by 4. Ex. 2008 is a leap year, but 2009 is not.              *
 * Sample program:                                                              *
 * Enter a month (1 - 12): 2 [Enter]                                            *
 * Enter a year: 2008 [Enter]                                                   *
 * 29 days                                                                      *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int month;
	int year;

	cout << "Enter a month (1 - 12): ";
	cin >> month; 

	cout << "Enter a year: ";
	cin >> year; 

	switch (month)
	{
     //all the months with 31 days 
	case 1: 
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31 days";
		break;

     //all the months with 30 days
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30 days.";
		break;

     //feburary is the deciding month for leap years 
	case 2: 
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "29 days";
			}

			else
			{
				cout << " 28 days";
			}
		}

		else if (year % 100 != 0)
		{
			if (year % 4 == 0)
			{
				cout << " 29 days";
			}

			else
			{
				cout << " 28 days";
			}
		}

		break;

	default: cout << "Invalid month, please enter 1 - 12" << endl; 
	}
	return 0;
}
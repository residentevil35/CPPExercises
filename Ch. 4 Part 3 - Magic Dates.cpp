/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 3) Magic Dates - Pg. 220                                                     *
 * Description: The date June 10, 1960 is special because when we write it in   *
 * the following format, the month times the day equals the year.               *
 * 6/10/60                                                                      *
 * Write a program that asks the user to enter a month (in numeric form), a day *
 * and a two-digit year. The program should then determine whether the month    *
 * times the day is equal to the year. If so, it should display a message saying*
 * the date is magic. Otherwise, it should display a message saying the date    *
 * is not magic.                                                                *
 ********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int month;            
	int day;
	int year;
	int result;

	cout << "Magic Dates" << endl;
	cout << "Please enter the month in numeric format: ";
	cin >> month; 

	cout << "Please enter the day: ";
	cin >> day;

	cout << "Please enter the year in two digits: ";
	cin >> year;

	result = month * day; 

	if (result == year)
	{
		cout << "The date: " << month << '/' << day << '/' << year << " is a magic date";
	}

	else
	{
		cout << "The date: " << month << '/' << day << '/' << year << " is not a magic date";
	}
	return 0;
}
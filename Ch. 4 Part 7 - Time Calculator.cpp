/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 7) Time Calculator - Pg. 221                                                 *
 * Description: Write a program that asks the user to enter a number of seconds.*
 * There are 60 seconds in a minute. If the number of seconds entered by the    *
 * user is greater than or equal to 60, the program should display the number   *
 * of minutes in that many seconds.                                             *
 * There are 3,600 seconds in an hour. If the number of seconds entered by the  *
 * user is greater than or equal to 3,600, the program should display the number*
 * of hours in that many seconds.                                               *
 * There are 86.400 seconds in a day. If the number of seconds entered by the   *
 * user is greater than or equal to 86.400, the program should display the      *
 * number of days in that many seconds.                                         *
 ********************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int seconds;
	int minutes;
	int hours;
	int day;

	cout << "Enter the number of seconds: ";
	cin >> seconds;

	cout << fixed << setprecision(2);

	if (seconds <= 59)
	{
		cout << seconds << " is less than 60 seconds." << endl;
	}

	else if (seconds >= 60 && seconds < 3600)
	{
		//finding how many minutes in seconds
		minutes = seconds / 60;
		cout << "The number of minutes in " << seconds << " seconds is: " << minutes << endl; 
	}

	else if (seconds >= 3600 && seconds < 86400)
	{
		//finding how many hours in seconds 
		hours = seconds / 3600;
		cout << "The number of hours in " << seconds << " seconds is: " << hours << endl; 
	}


	else if (seconds >= 86400)
	{
		//finding how many days in seconds
		day = seconds / 86400;
		cout << "The number of days in " << seconds << " seconds is: " << day << endl;
	}

	return 0;
}

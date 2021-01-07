/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 5                                            *
 * 1) Sum of Numbers - Pg. 293                                                   *
 * Description: Write a program that asks the user for a positive integer value. *
 * The program should use a loop to get the sum of all the integers from 1 up to *
 * the number entered. Ex) if a user enters 50, the loop will find the sum of    *
 * 1, 2, 3, 4, ....50                                                            *
 * Input validation: Do not accept a negative starting number.                   *
 ********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num;
	int sum = 0;
	int i = 0;

	cout << "Enter a positive integer value: ";
	cin >> num;

	if (num < 0)
	{
		cout << "Number cannot be less than 0";
	}

	else
	{
		while (i <= num)
		{
			sum += i;
			i++;
		}

		cout << "The sum is: " << sum << endl;
	}
	return 0;
}
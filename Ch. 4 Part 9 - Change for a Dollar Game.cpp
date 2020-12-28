/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 9) Change for a Dollar Game - Pg. 221                                        *
 * Description: Create a change-counting game that gets the user to enter the   *
 * number of coins required to make exactly one dollar. The program should ask  *
 * the user to enter the number of pennies, nickels, dimes, and quarters. If    *
 * the total value of the coins entered is equal to one dollar, the program     *
 * should congratulate the user for winning the game. Otherwise, the program    *
 * should display a message indicating whether the amount entered was more than *
 * or less than one dollar.                                                     *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int pennies;
	float penVal;
	int nickels;
	float nickVal;
	int dimes;
	float dimeVal;
	int quarters;
	int quarterVal;
	float total;

	cout << "Please enter the number of pennies: ";
	cin >> pennies;

	penVal = pennies * 0.01;

	cout << "Please enter the number of nickels: ";
	cin >> nickels;

	nickVal = nickels * 0.05;

	cout << "Please enter the number of dimes: ";
	cin >> dimes;

	dimeVal = dimes * 0.10;

	cout << "Please enter the number of quarters: ";
	cin >> quarters; 

	quarterVal = quarters * 0.25;

	total = penVal + nickVal + dimeVal + quarterVal;

	if (total == 1.00)
	{
		cout << "Congrats! You won the game! Your total equaled exactly $1." << endl;
	}

	else if (total < 1.00)
	{
		cout << "The total was $" << total << " which was less than $1." << endl;
	}

	else if (total > 1.00)
	{
		cout << "The total was $" << total << " which is greater than $1." << endl;
	}
	return 0;
}
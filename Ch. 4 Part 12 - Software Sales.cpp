/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 12) Software Sales - Pg. 222                                                 *
 * Description: A software company sells a package that retails for $99.        *
 * Quantity discounts are given according to the following table:               *
 *                                                                              *
 * Quantity                   Discount                                          *
 * ----------------------------------------------------                         *
 * 10 - 19                     20%                                              *
 * 20 - 49                     30%                                              *
 * 50 - 99                     40%                                              *
 * 100 or more                 50%                                              *
 * ----------------------------------------------------                         *
 * Write a program that asks for the number of units sold and computes the total*
 * cost of the purchase. Input validation: Make sure the number of units is     *
 * greater than 0                                                               *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int units;
	float total;
	float item = 99.00;
	float discount;

	cout << "Please enter the number of units sold: ";
	cin >> units; 

	cout << fixed << setprecision(2);

	if (units > 0)
	{
		//no discount 
		if (units < 10)
		{
			total = (item * units);
			cout << "For " << units << " units, the total cost is: $" << total;
		}
		//20% discount 
		else if (units >= 10 && units < 20)
		{
			discount = (item * units) * 0.20;
			total = (item * units) - discount; 
			cout << "For " << units << " units, the total cost with a 20% discount is: $" << total;
	     }

		//30% discount 
		else if (units >= 20 && units < 50)
		{
			discount = (item * units) * 0.30;
			total = (item * units) - discount;
			cout << "For " << units << " units, the total cost with a 30% discount is: $" << total;
		}

		//40% discount 
		else if (units >= 50 && units < 100)
		{
			discount = (item * units) * 0.40;
			total = (item * units) - discount;
			cout << "For " << units << " units, the total cost with a 40% discount is: $" << total;
		}

		//50% discount 
		else if (units >= 100)
		{
			discount = (item * units) * 0.50;
			total = (item * units) - discount;
			cout << "For " << units << " units, the total cost with a 50% discount is: $" << total;
		}
	}

	else
	{
		//input validation 
		cout << "Number of units must be more than 0. Try again.";
	}

	return 0;
}
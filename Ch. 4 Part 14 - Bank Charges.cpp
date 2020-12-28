/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 14) Bank Charges - Pg. 222                                                    *
 * Description: A bank charges $10/mo plus the following check fees for a        *
 * commercial checking account:                                                  *
 * $0.10 each for fewer than 20 checks                                           *
 * $0.08 each for 20 - 39 checks                                                 *
 * $0.06 each for 40 - 59 checks                                                 *
 * $0.04 each for 60 or more checks                                              *
 * The bank also charges an extra $15 if the balance of the account falls below  *
 * $400 (before any check fees are applied.) Write a program that asks for the   *
 * beginning balance and the number of checks written. Compute and display the   *
 * bank's service fees for the month. Input validation: Do not accept a negative *
 * value for the number of checks written. If a negative value is given for      *
 * the beginning balance, display an urgent message indicating the account is    *
 * overdrawn.                                                                    *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float monthlyFee = 10.00;      //monthly fee 
	float extra = 15.00;           //extra fee if balance below $400. 
	float balance;                 //beginning balance 
	int numChecks;                 //number of checks written 
	float checkFee;                //check fee based on number of checks 
	float serviceFee;              //bank service fee for the month 

	cout << fixed << setprecision(2);

	cout << "Please enter your current balance: ";
	cin >> balance;

	cout << "Please enter the number of checks that have been written: ";
	cin >> numChecks;

	if (numChecks > -1)
	{
		if (numChecks < 20)
		{
			checkFee = 0.10;
			serviceFee = (checkFee * numChecks) + monthlyFee;

			if (balance < 400)
			{
				serviceFee += extra;
			}

			cout << "The service fees for the month are: $" << serviceFee;
		}

		if (numChecks >= 20 && numChecks <= 39)
		{
			checkFee = 0.08; 
			serviceFee = (checkFee * numChecks) + monthlyFee;

			if (balance < 400)
			{
				serviceFee += extra;
			}

			cout << "The service fees for the month are: $" << serviceFee;
		}

		if (numChecks >= 40 && numChecks <= 59)
		{
			checkFee = 0.06; 
			serviceFee = (checkFee * numChecks) + monthlyFee;

			if (balance < 400)
			{
				serviceFee += extra;
			}

			cout << "The service fees for the month are: $" << serviceFee;
		}

		if (numChecks >= 60)
		{
			checkFee = 0.04;
			serviceFee = (checkFee * numChecks) + monthlyFee; 

			if (balance < 400)
			{
				serviceFee += extra;
			}

			cout << "The service fees for the month are: $" << serviceFee;
		}

	}
	
	else
	{
		cout << "Your account has been overdrawn";
	}
	return 0;
}
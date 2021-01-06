/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 25) Mobile Service Provider - pg. 226                                         *
 * Description: A mobile phone service provider has three different subscription *
 * packages for its customers:                                                   *
 * Package A: For $39.99 per month 450 minutes are provided. Additonal minutes   *
 * are $0.45 per minute.                                                         *
 *                                                                               *
 * Package B: For $59.99 per month 900 minutes are provided. Additonal minutes   *
 * are $0.40 per minute.                                                         *
 *                                                                               *
 * Package C: For $69.99 per month unlimited minutes provided.                   *
 * Write a program that calculates a customer's monthly bill. It should ask which*
 * package the customer has purchased and how many minutes were used. It should  *
 * then display the total amount due.                                            *
 * Input validation: Be sure the user only select package A, B, or C.            *
 ********************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char choice;
	float total;
	int mins;

	cout << "Please select which package you chose, either A, B, or C: ";
	cin >> choice;

	if (choice == 'A' || choice == 'a')  //choice A
	{
		cout << "Enter how many minutes were used: ";
		cin >> mins;

		//package price 
		total = 39.99; 

		//if you go over 450 minutes there is an extra charge per min 
		if (mins > 450)
		{
			//isolate only the minutes over the limit 
			mins = mins - 450;
			total = (mins * 0.45) + 39.99;
		}

	}

	else if (choice == 'B' || choice == 'b') //choice B 
	{
		cout << "Enter how many minutes were used: ";
		cin >> mins;

		//package price
		total = 59.99;

		//if you go over 900 minutes there is an extra charge per min
		if (mins > 900)
		{
			//isolate only the minutes over the limit
			mins = mins - 900;
			total = (mins * 0.40) + 59.99;
		}
	}

	else if (choice == 'C' || choice == 'c')
	{
		cout << "Enter how many minutes were used: ";
		cin >> mins;

		//package price
		total = 69.99;

	}

	//capitalize the letter 
	choice = toupper(choice);

	cout << "Your package was " << choice << " and after using " << mins << " minutes, your total is: $" << total;
	return 0;
}

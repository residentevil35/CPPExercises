/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 26) Mobile Service Provider Part 2 - Pg. 226                                  *
 * Description: Modify the Program in challenge 25 so that it also displays how  *
 * much money package A customers would save if they purchased packages B or C,  *
 * and how much money package B customers would save if they purchased package   *
 * c. If there would be no savings, no message should be printed.                *
 ********************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

float packageB(int mins)  //calculate the total for package B 
{
	float total;
	total = 59.99;

	//if you go over 900 minutes there is an extra charge per min
	if (mins > 900)
	{
		//isolate only the minutes over the limit
		mins = mins - 900;
		total = (mins * 0.40) + 59.99;
	}

	return total; 
}

int main()
{
	char choice;
	float total;
	int mins;
	float totalB;
	float totalC = 69.99;  //doesn't need to be calculated, unlimited minutes. 

	cout << fixed << setprecision(2);

	cout << "Please select which package you chose, either A, B, or C: ";
	cin >> choice;

	if (choice == 'A' || choice == 'a')  //choice A
	{
		cout << "Enter how many minutes were used: ";
		cin >> mins;

		//package price 
		total = 39.99; 

		//get the price for package B 
		totalB = packageB(mins);

		//if you go over 450 minutes there is an extra charge per min 
		if (mins > 450)
		{
			//isolate only the minutes over the limit 
			mins = mins - 450;
			total = (mins * 0.45) + 39.99;
		}

		cout << "Your package was package A and your total is: $" << total<< endl;

		if (totalB < total)  //if package B ends up being cheaper than A 
		{
			cout << "If you would have chose package B, you would have saved: $: " << total - totalB << endl;
		}

		if (totalC < total) //if package C ends up being cheaper than A 
		{
			cout << "If you would have chose package C, you would have saved: $: " << total - totalC << endl;
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

		cout << "Your package was package B and your total is: $" << total << endl;


		if (totalC < total) //if package C ends up being cheaper than B
		{
			cout << "If you would have chose package C, you would have saved: $: " << total - totalC << endl;
		}
	}

	else if (choice == 'C' || choice == 'c') //choice C
	{
		cout << "Enter how many minutes were used: ";
		cin >> mins;

		//package price
		total = 69.99;

		cout << "Your package was package C and your total is: $" << total << endl;
	}

	return 0;
}
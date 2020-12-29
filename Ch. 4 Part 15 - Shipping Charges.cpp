/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 15) Shipping Charges - Pg. 223                                                *
 * Description: The Fast Freight Shipping Company charges the following rates:   *
 *                                                                               *
 * Weight of Package (in Kilograms)           Rate per 500 Miles Shipped         *
 * ----------------------------------------------------------------------        *
 * 2 kg or less                                  $1.10                           *
 * Over 2 kg but not more than 6 kg              $2.20                           *
 * Over 6 kg but not more than 10 kg             $3.70                           *
 * Over 10 kg but not more than 20 kg            $4.80                           *
 *-----------------------------------------------------------------------        *
 * Write a program that asks for the weight of the package and the distance it is*
 * to be shipped, and then displays the charges.                                 *
 * Input validation: Do not accept values of 0 or less for the weight of the     *
 * package. Do not accept weights of more than 20 kg (this is the max weight     *
 * the company will ship.) Do not accept distances of less than 10 miles or more *
 * than 3,000 miles. These are the company's min and max shipping distances.     *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float weight; 
	float minWeight = 0;
	float maxWeight = 20;
	float distance;
	int minDis = 10;
	int maxDis = 3000;
	float rate;
	float total = 0;

	cout << "Enter the weight of the package: ";
	cin >> weight; 

	cout << "Enter the distance the package will be shipped: ";
	cin >> distance; 

	//input validation 
	if (weight <= minWeight || weight > maxWeight)
	{
		cout << "Package weight must be more than 0 and no more than 20 kg.";
	}

	else if (distance < minDis || distance > maxDis)
	{
		cout << "The distance cannot be less than 10 miles or more than 3,000 miles";
	}

	else
	{
		if (weight <= 2)
		{
			total = (distance / 500) * 1.10;
		}

		else if (weight > 2 && weight <= 6)
		{
			total = (distance / 500) * 2.20;
		}

		else if (weight > 6 && weight <= 10)
		{
			total = (distance / 500) * 3.70;
		}

		else if (weight > 10 && weight <= 20)
		{
			total = (distance / 500) * 4.80;
		}

	

		cout << "For a package with the weight of: " << weight << " kg and traveling a distance of: " << distance << " miles,";
		cout << " the shipping charges are: $" << setprecision(2) << total;

	}
	
	return 0; 
}
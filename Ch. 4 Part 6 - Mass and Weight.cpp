/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 6) Mass and Weight - Pg. 220                                                 *
 * Description: Scientists measure an object's mass in kilograms and its weight *
 * in neutons. If you know the amount of mass that an object has, you can       *
 * calculate its weight, in newtons, with the following formula:                *
 * Weight = mass * 9.8                                                          *
 * Write a program that asks the user to enter an object's mass, and then       *
 * calculates and displays its weight. If the object weighs more than 1,000     *
 * newtons, display a message indicating that it is too heavy. If the object    *
 * weighs less than 10 newtons, display a message indicatng that the object is  *
 * too light.                                                                   *
 ********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int mass;
	int weight;

	cout << "Enter the object's mass: ";
	cin >> mass;

	//calculating the weight in newtons
	weight = mass * 9.8;

	cout << "The weight of the object is " << weight << " neutons."<<endl;

	if (weight > 1000)
	{
		cout << "The item is too heavy.";
	}

	if (weight < 10)
	{
		cout << "The item is too light.";
	}
	return 0;
}
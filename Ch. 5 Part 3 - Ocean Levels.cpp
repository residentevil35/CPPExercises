/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 5                                            *
 * 3) Ocean Levels - Pg. 293                                                     *
 * Description: Assume the ocean's level is currently rising at about 1.5        *
 * millimeters per year, write a program that displays a table showing the number*
 * of millimeters that the ocean will have risen each year for the next 25 years*
 ********************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float rise = 1.5;
	float numMill = 0; 

	cout << "     Ocean Rising    " << endl;
	cout << "----------------------------" << endl;

	for (int i = 1; i < 26; i++)
	{
		numMill += rise;
		cout << " Year " << i <<"          "<< numMill << endl;
	}
	return 0;
}
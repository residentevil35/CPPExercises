/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 5                                            *
 * 4) Calories Burned - Pg. 293                                                  *
 * Description: Running on a particular treadmill you burn 3.6 calories per      *
 * minute. Write a program that uses a loop to display the number of calories    *
 * burned after 5, 10, 15, 20, 25, and 30 mins.                                  *
 ********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float calMin = 3.6;
	float calBurned = 0;

	for (int i = 5; i <= 30; i += 5)
	{
		calBurned = i * calMin;

		cout << "Calories burned after " << i << " minutes = " << calBurned << endl;
	}
	return 0;
}
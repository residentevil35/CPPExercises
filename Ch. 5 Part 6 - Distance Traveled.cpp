/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 5                                            *
 * 6) Distance Traveled - Pg. 294                                                *
 * Description: The distance a vehicle travels can be calculated as follows:     *
 * distance = speed * time                                                       *
 * For example, if a train travels 40 MPH for 3 hours, the distance traveled is  *
 * 120 miles. Write a program that asks the user for the speed of a vehicle      *
 * (in MPH) and how many hours it has traveled. The program should then use a loop
 * to display the distance the vehicle has traveled for each hour of that time   *
 * period. Here is an example of the output:                                     *
 *                                                                               *
 * What is the speed of the vehicle in MPH? 40                                   *
 * How many hours has it traveled? 3                                             *
 * Hour          Distance Traveled                                               *
 *---------------------------------                                              *
 *  1                   40                                                       *
 *  2                   80                                                       *
 *  3                  120                                                       *
 * Input validation: Do not accept a negative number for speed and do not accept *
 * any value less than 1 for time traveled.                                      *
 ********************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int speed;
	int time;
	int distance;

	cout << "How many hours has it traveled?: ";
	cin >> time;

	cout << "What is the speed of the vehicle in MPH?: ";
	cin >> speed;

	if (speed < 0 || time < 1)
	{
		cout << "Speed cannot be less than 0 and/or time cannot be less than 1";
	}

	else
	{
		cout << "Hour   Distance Traveled" << endl;
		cout << "---------------------------------------" << endl;

		for (int i = 1; i <= time; i++)
		{
			distance = speed * i;
			cout <<"  "<< i << "            " << distance << endl;
		}
	}
	return 0;
}
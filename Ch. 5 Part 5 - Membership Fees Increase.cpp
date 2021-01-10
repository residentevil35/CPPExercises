/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 5                                            *
 * 5) Membership Fees Increase - Pg. 293                                         *
 * Description: A country club, which currently charges $2,500/ yearly for       *
 * membership, has announced it will increase its membership fee by 4% each year *
 * for the next six years. Write a program that uses a loop to display the       *
 * projected rates for the next six years.                                       *
 ********************************************************************************/
#include <iostream>
#include <iostream>

using namespace std;

int main()
{
	int membership = 2500;
	float percent = 0.04;
	float fee = 2500;

	for (int i = 1; i < 7; i++)
	{
		cout << "Fee for year: " << fee << endl;
		fee += (membership * percent);
	}
	return 0;
}
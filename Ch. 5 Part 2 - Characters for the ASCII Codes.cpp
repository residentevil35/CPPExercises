/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 5                                            *
 * 2) Characters for the ASCII Codes - Pg. 293                                   *
 * Description: Write a program that uses a loop to display the characters for   *
 * the ASCII codes 0 through 127. Display 16 characters on each line.            *
 ********************************************************************************/

#include <iostream>
#include <iostream>

using namespace std;

int main()
{
	char ascii;

	for (int i = 0; i <= 127; i++)
	{
		ascii = i;
		cout << ascii << " ";
			
			if (i % 16 == 0)
			{
				cout << endl;
	          }
	}
	return 0;
}
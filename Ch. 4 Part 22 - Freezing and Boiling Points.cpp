/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 22) Freezing and Boiling Points - Pg. 224                                     *
 * Description: The following table lists the freezing and boiling points of     *
 * several substances. Write a program that asks the user to enter a temperature *
 * and then shows all the substances that will freeze at that temperature and all*
 * that will boil at that temp. Ex. If the user enters -20 the program should    *
 * report that water will freeze and oxygen will boil at that temperature.       *
 *                                                                               *
 * Substance               Freezing Point(F)           Boiling Point(F)          *
 *-----------------------------------------------------------------------        *
 * Ethyl Alcohol                -173                        172                  *
 * Mercury                       -38                        676                  *
 * Oxygen                       -362                       -306                  *
 * Water                          32                        212                  *
 ********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int temp;

	cout << "Enter a temperature: ";
	cin >> temp;

	cout << "For " << temp << " degree Farenheit:" << endl;

	//freezing points 
	if (temp <= -173)  //ethyl alcohol
	{
		cout << "Ethyl Alcohol will freeze at this point." << endl;
	}

	if (temp <= -38)  //mercury 
	{
		cout << "Mercury will freeze at this point." << endl;
	}

	if (temp <= -362)  //oxygen 
	{
		cout << "Oxygen will freeze at this point." << endl;
	}

	if (temp <= 32) //water
	{
		cout << "Water will feeze at this point." << endl;
	}

	//boiling points
	if (temp >= 172)  //ethyl alcohol
	{
		cout << "Ethyl Alcohol will boil at this point." << endl;
	}

	if (temp >= 676)  //mercury 
	{
		cout << "Mercury will boil at this point." << endl;
	}

	if (temp >= -306) //oxygen
	{
		cout << "Oxygen will boil at this point." << endl;
	}

	if (temp >= 212)  //water 
	{
		cout << "Water will boil at this point." << endl;
	}
	return 0;
}
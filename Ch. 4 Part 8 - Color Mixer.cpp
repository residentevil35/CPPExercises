/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 8) Color Mixer - Pg. 221                                                     *
 * Description: The colors red, blue, and yellow are known as the primary colors*
 * because they cannot be made by mixing other colors. When you mix two primary *
 * colors, you get a secondary color, as shown here:                            *
 * Mix red and blue, you get purple                                             *
 * Mix red and yellow, you get orange                                           *
 * Mix blue and yellow, you get green                                           *
 *                                                                              *
 * Write a program that prompts the user to enter the names of two primary      *
 * colors to mix. If the user enters anything other than "red", "blue", or      *
 * "yellow", the program should display an error message. Otherwise, the program*
 * should display the name of the secondary color that results by mixing two    *
 * primary colors.                                                              *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string color1;
	string color2;

	cout << "Enter two primary colors to mix: ";
	cin >> color1 >> color2;

	//red and blue
	if (color1 == "red" && color2 == "blue")
	{
		cout << color1 << " and " << color2 << " make purple." << endl;
	}

	//blue and red
	else if (color1 == "blue" && color2 == "red")
	{
		cout << color1 << " and " << color2 << " make purple." << endl;
	}

	//red and yellow
	else if (color1 == "red" && color2 == "yellow")
	{
		cout << color1 << " and " << color2 << " make orange." << endl;
	}

	//yellow and red
	else if (color1 == "yellow" && color2 == "red")
	{
		cout << color1 << " and " << color2 << " make orange." << endl;
	}

	//blue and yellow
	else if (color1 == "blue" && color2 == "yellow")
	{
		cout << color1 << " and " << color2 << " make green." << endl;
	}

	//yellow and blue
	else if (color1 == "yellow" && color2 == "blue")
	{
		cout << color1 << " and " << color2 << " make green." << endl;
	}

	//invalid entry
	else
	{
		cout << "You must enter two primary colors, please try again." << endl;
	}
	return 0;
}
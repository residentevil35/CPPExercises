/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 21) The Speed of Sound in Gases - Pg. 224                                     *
 * Description: When sound travel through a gas, its speed depends primarily on  *
 * the density of the medium. The less dense the medium, the faster the speed    *
 * will be. The following tavle shows the approximate speed of sound at 0        *
 * degrees centigrade, measured in meters per second, when traveling through     *
 * carbon dioxide, air, helium, and hydrogen.                                    *
 *                                                                               *
 * Medium                 Speed (Meters per Second)                              *
 *-------------------------------------------------                              *
 * Carbon dioxide          258.0                                                 *
 * Air                     331.5                                                 *
 * Helium                  972.0                                                 *
 * Hydrogen               1270.0                                                 *
 *                                                                               *
 * Write a program that displays a menu allowing the user to select one of these *
 * four gases. After a selection has been made, the user should enter the number *
 * of seconds it took for the sound to travel in this medium from its source to  *
 * the location at which it was detected. The program should then report how far *
 * away (in meters) the source of the sound was from the detection location.     *
 * Input validation: Check that the user has selected one of the available menu  *
 * choices. Do not accept times less than 0 seconds or more than 30 seconds.     *
 ********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int choice;
	int seconds; 
	int distance;

	const float carbon = 258.0;
	const float air = 331.5;
	const float helium = 972.0;
	const float hydrogen = 1270.0;

	cout << "Please enter a choice 1 - 4" << endl;
	cout << "1 for carbon dioxide" << endl;
	cout << "2 for air" << endl;
	cout << "3 for helium" << endl;
	cout << "4 for hydrogen" << endl; 

	cin >> choice;

	switch (choice)
	{
	case 1: cout << "You chose carbon dioxide" << endl;
		cout << "Enter the number of seconds it took for the sound to travel from the source to the location: ";
		cin >> seconds; 

		if (seconds < 0 || seconds > 30)
		{
			cout << "Seconds cannot be less than 0 or more than 30";
		}

		else
		{
			distance = seconds * carbon;

			cout << "The distance was: " << distance << " meters" << endl;

		}
		
		break;

	case 2: cout << "You chose air" << endl;
		cout << "Enter the number of seconds it took for the sound to travel from the source to the location: ";
		cin >> seconds;

		if (seconds < 0 || seconds > 30)
		{
			cout << "Seconds cannot be less than 0 or more than 30";
		}

		else
		{
			distance = seconds * air;

			cout << "The distance was: " << distance << " meters" << endl;
		}
		break;

	case 3: cout << "You chose helium" << endl;
		cout << "Enter the number of seconds it took for the sound to travel from the source to the location: ";
		cin >> seconds;

		if (seconds < 0 || seconds > 30)
		{
			cout << "Seconds cannot be less than 0 or more than 30";
		}

		else
		{
			distance = seconds * helium;

			cout << "The distance was: " << distance << " meters" << endl;
		}
		break;

	case 4: cout << "You chose hydrogen" << endl;
		cout << "Enter the number of seconds it took for the sound to travel from the source to the location: ";
		cin >> seconds;

		if (seconds < 0 || seconds > 30)
		{
			cout << "Seconds cannot be less than 0 or more than 30";
		}

		else
		{
			distance = seconds * hydrogen;

			cout << "The distance was: " << distance << " meters" << endl;
		}
		break; 

	default: cout << "The choice must be a number between 1 - 4. Please try again." << endl;
		break;

	}

	return 0;
}

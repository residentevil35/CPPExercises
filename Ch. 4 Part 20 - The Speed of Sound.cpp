/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 20) The Speed of Sound - Pg. 223                                              *
 * Description: The following table the approximate speed of sound in air, water *
 * and steel.                                                                    *
 * Medium                 Speed                                                  *
 * --------------------------------------------                                  *
 * Air                   1,100 feet per second                                   *
 * Water                 4,900 feet per second                                   *
 * Steel                16,400 feet per second                                   *
 * Write a program that displays a menu allowing the user to select to air, water,
 * or steel. After the user has made a selection, he/she should be asked to enter*
 * the distance a sound wave will travel in the selected medium. The program will*
 * then display the amount of time it will take. (Round to 4 decimal places.)    *
 * Input validation: Check that the user has selected one of the available       *
 * choices from the menu. Do not accept distances less than 0.                   *
 ********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int choice;
	float distance;
	float total;

	cout << "Please enter a choice: " << endl;
	cout << "1 for air" << endl;
	cout << "2 for water" << endl;
	cout << "3 for steel" << endl<<endl;
	cin >> choice;

	cout << fixed << setprecision(4);

	switch (choice)
	{

	case 1: cout << "You chose air" << endl;
		cout << "Enter the distance a sound wave will travel in air: ";
		cin >> distance; 

		if (distance < 0)
		{
			cout << "Distance cannot be less than 0";
		}

		total = distance / 1100;

		cout << "Amount of time it will take: " << total << " seconds" << endl;
		break;

	case 2: cout << "You chose water" << endl;
		cout << "Enter the distance a sound wave will travel in water: ";
		cin >> distance;

		if (distance < 0)
		{
			cout << "Distance cannot be less than 0";
		}

		total = distance / 4900;

		cout << "Amount of time it will take: " << total << " seconds" << endl;
		break;

	case 3: cout << "You chose steel" << endl; 
		cout << "Enter the distance a sound wave will travel in steel: ";
		cin >> distance;

		if (distance < 0)
		{
			cout << "Distance cannot be less than 0";
		}

		total = distance / 16400;

		cout << "Amount of time it will take: " << total << " seconds" << endl;
		break;

	default: cout << "Please enter either air, water, or steel" << endl;
		break; 
	}
	return 0;
}
/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 23) Geometry Calculator - Pg. 225                                             *
 * Description: Write a program that displays the following menu:                *
 * Geometry Calculator                                                           *
 *   1. Calculate the Area of a Circle                                           *
 *   2. Calculate the Area of a Rectangle                                        *
 *   3. Calculate the Area of a Triangle                                         *
 *   4. Quit                                                                     *
 *                                                                               *
 *   Enter your choice (1 - 4):                                                  *
 * If the user enters 1, the program should ask for the radius of the circle and *
 * then display its area. Use the following formula:                             *
 * area = pie r^2                                                                *
 * Use 3.14159 for pie and the radius of the circle for r. If the user enters 2, *
 * the program should ask for the length and width of the rectangle and then     *
 * display the rectangle's area. Use the following formula:                      *
 * area = length * width                                                         *
 * If the user enters 3, the program should ask for the length of the triangle's *
 * base and its height, and then display its area. Use the following formula:    *
 * area = base * height * 0.5                                                    *
 * If the user enters 4, the program should end.                                 *
 * Input validation: Display an error message if the user enters a number outside*
 * the range of 1 through 4 when selecting an item from the menu. Do not accept  *
 * negative values for the circle's radius, the rectangl'es length or width, or  *
 * the traingle's base or height.                                                *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int choice;
	const float pi = 3.14159;
	int r;   //radius 
	int area;
	int length;
	int width;
	int base;
	int height;


	cout << "    Geometry Calculator" << endl;
	cout << "        1. Calculate the Area of a Circle" << endl;
	cout << "        2. Calculate the Area of a Rectangle " << endl;
	cout << "        3. Calculate the Area of a Triangle" << endl;
	cout << "        4. Quit" << endl << endl;
	cout << "        Enter your choice (1 - 4):";
	cin >> choice;

	switch (choice)
	{
	case 1: cout << "Calculate the Area of a Circle" << endl;
		cout << "Enter the radius of the circle: ";
		cin >> r;

		area = pi * pow(r, 2.0);

		cout << "The area of a circle with a radius of " << r << " is: " << area << endl;
		break;

	case 2: cout << "Calculate the Area of a Rectangle" << endl;
		cout << "Enter the length of the rectangle: ";
		cin >> length;

		cout << "Enter the width of the Rectangle: ";
		cin >> width;

		area = length * width; 

		cout << "The area of a rectangle with a width of " << width << " and a length of " << length << " is: " << area << endl;
		break;

	case 3: cout << "Calculate the Area of a Triangle" << endl;
		cout << "Enter the triangle's base: ";
		cin >> base;

		cout << "Enter the triangle's height: ";
		cin >> height;

		area = (base * height) * 0.5;

		cout << "The area of a triangle with a base of " << base << " and a height of " << height << " is: " << area << endl;
		break;

	case 4: cout << "Goodbye.." << endl;
		break;

	default: cout << "Please enter a choice between 1 - 4" << endl;
		break;

	}

	return 0;
}
/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 4) Areas of Rectangles - Pg. 220                                             *
 * Deacription: The area of a rectangle is the rectangle's length times its     *
 * width. Write a program that asks for the length and width of two rectangles. *
 * The program should tell the user which rectangle has the greater area, or    *
 * if the areas are the same.                                                   *
 ********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int len1;
	int len2;
	int wid1;
	int wid2;
	int area1;
	int area2;

	cout << "Enter the length of rectangle 1: ";
	cin >> len1;

	cout << "Enter the width of rectangle 1: ";
	cin >> wid1;

	cout << "Enter the length of rectangle 2: ";
	cin >> len2;

	cout << "Enter the width of rectangle 2: ";
	cin >> wid2;

	area1 = len1 * wid1;
	area2 = len2 * wid2;

	if (area1 > area2)
	{
		cout << "Rectangle 1 has a greater area than Rectangle 2";
	}

	else if (area2 > area1)
	{
		cout << "Rectangle 2 has a greater area than Rectangle 1";
	}

	else if (area2 == area1)
	{
		cout << "The areas of the rectangles are the same.";
	}
	return 0;
}
/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 13) Book Club Points - Pg. 222                                                *
 * Description: Serendipity Booksellers has a book club that awards points to    *
 * its customers based on the number of books purchased each month. The points   *
 * are awarded as follows:                                                       *
 * If a customer purchases 0 books, they earn 0 points.                          *
 * If a customer purchases 1 book, they earn 5 points.                           *
 * If a customer purchases 2 books, they earn 15 points.                         *
 * If a customer purchases 3 books, they earn 30 points.                         *
 * If a customer purchases 4 or more books, they earn 60 points.                 *
 *                                                                               *
 * Write a program that asks the user to enter the number of books that they     *
 * have purchased this month and then displays the number of points awarded.     *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numBooks;
	int points = 0;

	cout << "Enter the number of books you have purchased this month: ";
	cin >> numBooks;

	switch (numBooks)
	{
	case 0: cout << "The number of points you have earned is: " << points;
		break;

	case 1: points = 5;
		   cout << "The number of points you have earned is: " << points;
		   break;

	case 2: points = 15;
		cout << "The number of points you have earned is: " << points;
		break;

	case 3: points = 30;
		cout << "The number of points you have earned is: " << points;
		break;

	case 4: points = 60;
		cout << "The number of points you have earned is: " << points; 
		break;

	default: points = 60;
		cout << "The number of points you have earned is: " << points;
		break; 
	}


	return 0;
}
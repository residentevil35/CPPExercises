/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 11) Math Tutor - Pg. 222                                                     *
 * Description: This is a modification of Programming Challenge 17 from Chapter *
 * 3. Write a program that can be used as a math tutor for a young student. The *
 * program should display two random numbers that are to be added, such as:     *
 *  247                                                                         *
 * +129                                                                         *
 * -----                                                                        *
 *                                                                              *
 * The program should wait for the student to enter the answer. If the answer is*
 * correct, a message of congratulations should be printed. If the answer is    *
 * incorrect, a message should be printed showing the correct answer.           *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num1;
	int num2;
	int answer;
	int input; 

	cout << "Enter the two numbers to be added: ";
	cin >> num1 >> num2;

	answer = num1 + num2;

	cout << "System will pause while you work the program..." << endl;
	cout << "Enter your answer when finished: ";
	cin >> input;

	if (input == answer)
	{
		cout << "Congratulations! The answer to " << num1 << " + " << num2 << " = " << answer;
	}

	else if (input != answer)
	{
		cout << "The answer is incorrect. The correct answer is: " << answer; 
	}

	return 0;
}
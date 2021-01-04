/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 18) Fat Gram Calculator - Pg. 223                                             *
 * Description: Write a program that asks for the number of calories and fat     *
 * grams in a food. The program should display the percentage of calories that   *
 * come from fat. If the calories from fat are less than 30% of the total        *
 * calories of the food, it should also display a message indicating that the    *
 * food is low in fat. One gram of fat has 9 calories so,                        *
 * calories from fat = fat grams * 9                                             *
 * The percentage of calories from fat can be calculated as                      *
 * calories from fat / total calories                                            *
 * Input validation: Make sure the number of calories and fat grams are not less *
 * than 0. Also, the number of calories from fat cannot be greater than the total*
 * number of calories. If that happens, an error message indicating that either  *
 * the calories or fat grams were incorrectly entered.                           *
 ********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	float calories;
	float fat;
	float calFromFat;
	float perCal;
	float percent = 0.30;
	float perFat; 

	cout << "Enter the number of calories: ";
	cin >> calories;

	cout << "Enter the number of fat grams: ";
	cin >> fat;

	if (calories < 0 || fat < 0)
	{
		cout << "Calories or fat cannot be less than 0";
	}

	//finding the calories from fat 
	calFromFat = fat * 9;

	//finding the percentage of calories from fat 
	perCal = calFromFat / calories;

	//finding the percentage of fat 
	perFat = perCal * percent; 

	cout << "The percentage of calories from fat: " << perCal * 100 <<" %" << endl;

	if (perFat < percent)
	{
		cout << "This food is low in fat.";
	}

	return 0;
}
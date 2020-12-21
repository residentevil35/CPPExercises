/********************************************************************************
 * Rachel Coughanour                                                            *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition    *
 * Programming Challenges - Chapter 4                                           *
 * 5) Body Mass Index - Pg. 220                                                 *
 * Description: Write a program that calculates and displays a person's body    *
 * mass index (BMI). The BMI is often used to determine whether a person with   *
 * a sedentary lifestyle is overweight or underweight for his/her height. A     *
 * person's BMI is calculated with the following formula:                       *
 * BMI = weight x 703 / height^2                                                *
 * where weight is measured in pounds and height is measured in inches. The     *
 * program should display a message indicating whether the person has optimal   *
 * weight, is underweight, or overweight. A sedentary person's weight is        *
 * considered to be optimal if it is between 18.5 and 25. If the BMI is less    *
 * than 18.5, the person is underweight. If the BMI is greater than 25, they    *
 * are considered overweight                                                    *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	float bmi;
	float weight;
	float height;

	cout << "Please enter your weight in pounds: ";
	cin >> weight;

	cout << "Please enter your height in inches: ";
	cin >> height;

	bmi = weight * 703 / pow(height, 2.0);

	cout << fixed << setprecision(2) << endl;
	
	if (bmi < 18.5)
	{
		cout << "Your weight of " << bmi << " pounds is considered underweight.";
	}

	else if (bmi > 18.5 && bmi < 25)
	{
		cout << "Your weight of " << bmi << " pounds is considered an optimal weight";
	}

	else if (bmi > 25)
	{
		cout << "Your weight of " << bmi << " pounds is considered overweight.";
	}

	return 0;
}
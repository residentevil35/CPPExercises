 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 12) Celsius to Fahrenheit - Pg. 143                                          *
  * Description: Write a program that converts Celsius temperatures to Fahrenheit*
  * The formula is:                                                              *
  *                                                                              *
  * F = 9/5 C + 32                                                               *
  *                                                                              *
  * Where F is Fahrenheit temperature, and C is Celsius.                         *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   float fahrenheit = 0;
   float celsius = 0;
   
   cout<<"Enter the temperature in Celsius: "<<endl;
   cin>>celsius;
   
   fahrenheit = ((9.0 / 5.0) * celsius) + 32;
   
   cout<<celsius<<" degrees Celsius is "<<fahrenheit<<" degrees Fahrenheit"<<endl;
    return 0;
}
  
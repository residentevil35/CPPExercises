 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 1) Miles Per Gallon - Page 142                                               *
  *                                                                              *
  * Description: Write a program that calculates a car's gas mileage. The program*
  * should ask the user to enter the number of gallons of gas the car can hold   *
  * and the number of miles it can be driven on a full tank. It should then      *
  * display the number of miles that may be driven per gallon of gas.            *
  ********************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int gallons = 0;   //number of gallons a car can hold
  int mpg = 0;       //miles per gallon of the car
  int miles = 0;     //number of miles the car can be driven on a full tank
  
  cout<<"Please enter the number of gallons the car can hold"<<endl;
  cin>>gallons;
  
  cout<<"Please enter the number of miles the car can be driven on a full tank."<<endl;
  cin>>miles;
  
  mpg = miles/gallons;
  
  cout<<"The MPG of the car is: "<<mpg<<" MPG";
    
    return 0;
}
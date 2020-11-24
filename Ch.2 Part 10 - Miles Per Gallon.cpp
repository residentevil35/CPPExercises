 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 10) Miles Per Gallon - Page 81                                               *
  *                                                                              *
  * Description: A car holds 15 gallons of gas and can travel 375 miles before   *
  * refueling. Write a program that calculates the number of miles per gallon the*
  * car gets. Display the result on the screen.                                  *
  *                                                                              *
  * Use the formula: MPG = Miles Driven/Gallons of Gas Used                      *
  ********************************************************************************/ 
  
  #include <iostream>
  #include <iomanip>
  
  using namespace std;
  
  int main()
  {
	 int mpg = 0; 
         int miles = 375;
         int gallons = 15;
	 
         //formula to calculate MPG
         mpg = miles/gallons;
         
         cout<<"The MPG of the car is: "<<mpg;
	 return 0;
  }
  
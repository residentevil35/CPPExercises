 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 20) Pizza Pi - Pg. 146                                                       *
  * Description: Joe's Pizza Palace needs a program to calculate the number of   *
  * slices a pizza of any size can be divided into. The program should perform   *
  * the following steps:                                                         *
  * A) Ask the user for the diameter of the pizza in inches                      *
  * B) Calculate the number of slices that may be taken from a pizza of that size*
  * C) Display a message telling the number of slices                            *
  *                                                                              *
  * To calculate the number of slices that may be taken from the pizza, you must *
  * know the following facts:                                                    *
  * Each slice should have an area of 14.125 inches.                             *
  * To calculate the number of slices, simply divide the area of the pizza by    *
  * 14.125                                                                       *
  * The area of the pizza is calculated with this formula: Area = pie R^2        *
  * pie = 3.14159. R is the radius of the pizza. Divide the diameter by 2        *
  * to get the radius. Make sure the output of the program displays the number of*
  * slices in fixed-point notation, rounded to one decimal of precision          *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int diameter;                  //the diameter of the pizza in inches 
    float slice = 14.125;          //the area of each slice 
    int numSlices;                 //the number of slices that may be taken from the pizza
    const float pi = 3.14159;      //the value of pi
    int radius;                    //the radius of the pizza 
    float area;                    //the area of the pizza 
    
    cout<<"What is the diameter of the pizza in inches? ";
    cin>>diameter;
    
    //calculating the radius 
    radius = diameter / 2;
    
    //calculating the area of the pizza
    area = pi * pow(radius, 2.0);
    
    //calculating the number of slices in each pizza 
    numSlices = area / slice;
    
    cout<<"Diameter of the pizza in inches: "<<diameter<<" in"<<endl;
    cout<<"The number of slices that can be taken from this pizza: "<<numSlices<<endl;
    return 0;
}
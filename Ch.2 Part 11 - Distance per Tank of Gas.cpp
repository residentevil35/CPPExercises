 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 11) Distance Per Tank of Gas - Page 81                                       *
  *                                                                              *
  * Description: A car with a 20-gallon gas tank averages 23.5 mpg when driven   *
  * in town and 28.9 mpg when driven on the highway. Write a program that        *
  * calculates and displays the distance the car can travel on one tank of gas   * 
  * when driven in town and when driven on the highway.                          *
  *                                                                              *
  * Hint: The following formula can be used to calculate the distance:           *
  * Distance = Number of Gallons x Average Miles per Gallon                      *
  ********************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float highway = 28.9;   //the mpg of a car on the highway 
    float town = 23.5;     //the mpg of a car in town
    float distanceTown = 0;//the distance calculated in town
    float distanceHwy = 0; //the distance calculated on the highway 
    float gallons = 20;    //the number of gallons the gas tank holds 
    
    //calculating the distance on the highway
    distanceHwy = gallons * highway;
    cout<<"The distance for the highway is: "<<distanceHwy<<endl;
    
    //calculating the distance in town
    distanceTown = gallons * town;
    cout<<"The distance for town is: "<<distanceTown<<endl;
    
   return 0;
}	
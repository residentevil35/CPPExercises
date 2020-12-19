 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 21) How Many Pizzas? - Pg. 146                                               *
  * Description: Modify the program you wrote in Programming Challenge 20 (Pizza *
  * Pi) so that it reports the number of pizzas you need to buy for a party if   *
  * each person attending is expected to eat an average of four slices. The      *
  * program should ask the user for the number of people who will be at the party*
  * and for the diameter of the pizzas to be ordered. It should then calculate   *
  * and display the number of pizzas to purchase.                                *
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
    int numPizzas;                 //the number of pizzas needed to be purchased 
    int numPeople;                 //the number of people attending the party 
    int slicesNeeded;              //slices needed per person
    
    cout<<"What is the diameter of the pizza in inches? ";
    cin>>diameter;
    
    cout<<"How many people will be attending the party? ";
    cin>>numPeople;
    
    //calculating the radius 
    radius = diameter / 2;
    
    //calculating the area of the pizza
    area = pi * pow(radius, 2.0);
    
    //calculating the number of slices in each pizza 
    numSlices = area / slice;
    
    //if each person eats an average of 4 slices 
    slicesNeeded = numPeople * 4;
    
    //calculating the number of pizzas needed for the party
    numPizzas = slicesNeeded / numSlices;
    
    cout<<"Diameter of the pizza in inches: "<<diameter<<" in"<<endl;
    cout<<"The number of slices that can be taken from this pizza: "<<numSlices<<endl;
    cout<<"The number of people attending the party: "<<numPeople<<endl;
    cout<<"The number of pizzas needed for the party: "<<numPizzas<<endl;
    return 0;
}
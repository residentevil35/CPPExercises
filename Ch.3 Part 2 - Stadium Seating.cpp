 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 2) Stadium Seating - Page 142                                                *
  *                                                                              *
  * Description: There are three seating categories at a stadium. For a softball *
  * game, Class A seats cost $15, Class B seats cost $12, and Class C seats cost *
  * $9. Write a program that asks how many tickets for each class of seats were  *
  * sold, then displays the amount of income generated from ticket sales. Format *
  * your dollar amount in fixed-point notation, with two decimal places of       *
  * precision, and be sure the decimal point is always displayed.                *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float classA = 15.00;      //different prices for each class 
    float classB = 12.00;
    float classC = 9.00; 
    
    int ticketsA = 0;           //number of tickets sold for class A
    int ticketsB = 0;           //number of tickets sold for class B 
    int ticketsC = 0;           //number of tickets sold for class C 
    
    float salesA = 0;           //number of sales made for class A 
    float salesB = 0;           //number of sales made for class B 
    float salesC = 0;           //number of sales made for class C 
    
    cout<<fixed<<setprecision(2);  //for 2 decimal places 
    
    cout<<"Please enter the number of tickets sold for Class A."<<endl;
    cin>>ticketsA;
    
    cout<<"Please enter the number of tickets sold for Class B."<<endl;
    cin>>ticketsB;
    
    cout<<"Please enter the number of tickets sold for Class C."<<endl;
    cin>>ticketsC;
    
    salesA = ticketsA * classA;
    salesB = ticketsB * classB;
    salesC = ticketsC * classC;
    
    cout<<"The sales for Class A tickets were: $"<<salesA<<endl;
    cout<<"The sales for Class B tickets were: $"<<salesB<<endl;
    cout<<"The sales for Class C tickets were: $"<<salesC<<endl;
}
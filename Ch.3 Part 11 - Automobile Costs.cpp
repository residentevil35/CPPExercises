 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 11) Automobile Costs - Pg. 143                                               *
  * Description: Write a program that asks the user to enter the monthly costs   *
  * for the following expenses incurred from operating his/her automobile:       *
  * loan payment, insurance, gas, oil, tires, and maintenance. The program should*
  * then display the total monthly cost of these expenses, and the total annual  *
  * cost of these expenses.                                                      *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float loan;
  float insurance;
  float gas;
  float oil;
  float tires;
  float maintenance;
  float totalMonthly = 0;
  float totalAnnual = 0;

cout<<"Enter the amount of monthly cost for your loan payment:";
cin>>loan;

cout<<"Enter the amount of monthly cost for your insurance:";
cin>>insurance;

cout<<"Enter the amount of monthly cost for your gas:";
cin>>gas;

cout<<"Enter the amount of monthly cost for your tires:";
cin>>tires;

cout<<"Enter the amount of monthly cost for your maintenance:";
cin>>maintenance;

//calculating the total amount owed monthly
totalMonthly = loan + insurance + gas + oil + tires + maintenance;

//calculating the total amount owed annually 
totalAnnual = totalMonthly * 12;

cout<<"The amount owed monthly for the car expenses is: $"<<totalMonthly<<endl;

cout<<"The amount owed yearly for the car expenses is: $"<<totalAnnual<<endl;

 return 0;
}
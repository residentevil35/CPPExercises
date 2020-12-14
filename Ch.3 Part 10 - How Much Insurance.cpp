 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 10) How Much Insurance? - Pg. 143                                            *
  * Description: Many financial experts advise that property owners should       *
  * insure their homes or buildings for at least 80% of the amount it would cost *
  * to replace the structures. Write a program that asks the user to enter the   *
  * replacement cost of a building and then displays the minimum amount of       *
  * insurance he/she should buy for the property.                                *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   float insurePerc = 0.80;               //insurance percentage 
   float replaceCost = 0;                 //replacement cost for the building 
   float insurance = 0;                   //how much insurance should be bought 
   
   cout<<"Enter the replacement cost for the building: "<<endl;
   cin>>replaceCost;
   
   //calculating the amount of insurance needed to purchase 
   insurance = insurePerc * replaceCost;
   
   cout<<"The amount of insurance should be at least 80% of the amount it";
   cout<<"would cost to replace the structure."<<endl<<endl;
   
   cout<<"For a replacement cost of: $"<<replaceCost<<" the minimum amount of insurance would be: $"<<insurance<<endl;
   
   return 0;
}
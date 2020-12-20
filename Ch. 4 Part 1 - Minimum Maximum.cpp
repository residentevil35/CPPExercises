 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 4                                           *
  * 1) Minimum/Maximum - Pg. 220                                                 *
  * Description: Write a program that asks the user to enter two numbers. The    *
  * program should use the conditional operator to determine which number is the *
  * smaller and which is the larger.                                             *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int num1;
   int num2;
   
   cout<<"Enter two numbers: ";
   cin>>num1>>num2;
   
   if(num1 > num2)
   {
       cout<<num1<<" is the largest and"<<num2<<" is the smallest";
   }
   
   else if (num2 > num1)
   {
       cout<<num2<<" is the largest and"<<num1<<" is the smallest";
   }
    return 0;
}
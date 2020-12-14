 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 13) Currency = Pg. 143                                                       *
  * Description: Write a program that will convert U.S. dollar amounts to        *
  * Japanese yen and to euros, storing the conversion factors in the constants   *
  * yen_per_dollar and euros_per_dollar. To get the most up-to-date exchange     *
  * rates, search the internet using the term "currency exchange rate." If you   *
  * cannot find the most recent, use the following:                              *
  *                                                                              *
  * 1 Dollar = 98.93 Yen                                                         *
  * 1 Dollar = 0.74 Euros                                                        *
  *                                                                              *
  * Format your currency amounts in fixed-point notation, with two decimal       *
  * places of precision, and be sure the decimal point is always displayed.      *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float dollar; 
    float yen = 98.93;
    float euro = 0.74;
    float yen_per_dollar;
    float euros_per_dollar;
   
  cout<<fixed<<setprecision(2)<<endl;
    
  cout<<"Enter the amount in U.S. dollars: ";
  cin>>dollar;
  
  yen_per_dollar = dollar * yen;
  euros_per_dollar = dollar * euro;
  
  cout<<dollar<<" dollar(s) is equal to "<<yen_per_dollar<<" yen and "<<euros_per_dollar<<" euros"<<endl;
  
  
    return 0;
}
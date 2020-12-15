 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 18) Interest Earned - Pg. 145                                                *
  * Description: Assuming there are no deposits other than the original          *
  * investment, the balance in a savings account after one year may be calculated*
  * as                                                                           *
  *                                                                              *
  * Amount = Principal * (1 + rate/T) T                                          *
  *                                                                              *
  * Principal is the balance in the savings account, Rate is the interest rate,  *
  * and T is the number of times the interest is compounded during a year (T is  *
  * 4 if the interest is compounded quarterly). Write a program that asks for    *
  * the principal, the interest rate, and the number of times the interest is    *
  * compounded. It should display a report similar to:                           *
  *                                                                              *
  * Interest Rate:         4.25%                                                 *
  * Times Compounded:         12                                                 *
  * Principal:             $1000.00                                              *
  * Interest:              $  43.34                                              *
  * Amount in Savings:     $1043.34                                              *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
   float amount;
   float interestRate;
   float timesComp;
   float interest;
   float principal;
   
   cout<<"Please enter the amount currently in the savings account: ";
   cin>>principal;
   
   cout<<"Please enter how many times the interest is compounded: ";
   cin>>timesComp;
   
   cout<<"Please enter the interest rate: ";
   cin>>interestRate;
   
   interestRate = interestRate / 100;
   
   amount = principal * pow((1 + interestRate / timesComp), timesComp);
   
   cout<<endl;
   cout<<"---------------------------------------"<<endl;
   cout<<"Interest Rate:           "<<interestRate * 100<<" %"<<endl;
   cout<<"Times Compounded:        "<<timesComp<<endl;
   cout<<"Principal:               $"<<principal<<endl;
   cout<<"Interest:                $"<<interest<<endl;
   cout<<"Amount in Savings:       $"<<amount<<endl;
   
    return 0;
}
 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 19) Monthly Payments - Pg. 145                                               *
  * Description: The monthly payment on a loan may be calculated by the following*
  * formula:                                                                     *
  *                                                                              *
  * Payment = [Rate * (1 + Rate ) ^N / (( 1 + Rate)^N - 1)] * L                  *
  *                                                                              *
  * Rate is the monthly interest rate, which is the annual interest rate divided *
  * by 12. (12% annual interest would be 1 percent monthly interest.) N is the   *
  * number of payments, and L is the amount of the loan. Write a program that    *
  * asks for these values and displays a report similar to:                      *
  * Loan Amount:                 $10000.00                                       *
  * Monthly Interest Rate:             1%                                        *
  * Number of payments:                36                                        *
  * Monthly Payment:             $332.14                                         *
  * Amount Paid Back:            $11957.15                                       *
  * Interest Paid:               $ 1957.15                                       *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   float loan;          //the amount of the loan
   float rate;          //the monthly interest rate 
   float annualRate;    //the annual interest rate
   int numPay;          //the number of payments 
   float payment;       //the monthly payment 
   
   cout<<fixed<<setprecision(2)<<endl;
   
   cout<<"Please enter the loan amount: ";
   cin>>loan;
   
   cout<<"Please enter the annual interest rate: ";
   cin>>annualRate;
   
   //finding the monthly interest rate 
   //rate / 100 ex = 12 / 100 = 0.12 then / 12.0 = 0.01
   rate = (annualRate / 100) / 12.0;
   
   cout<<"Please enter the number of payments: ";
   cin>>numPay;
   
   payment = ((rate) * pow(1 + (rate), numPay) / (pow(1 + (rate), numPay) - 1)) * loan;
   
   cout<<"Loan Amount:                 $"<<loan<<endl;
   cout<<"Monthly Interest Rate:       "<<rate * 100<<"%"<<endl;
   cout<<"Number of Payments:          "<<numPay<<endl;
   cout<<"Monthly Payment:             $"<<payment<<endl;
   cout<<"Amount Paid Back:            $"<<numPay * payment<<endl;
   cout<<"Interest Paid:               $"<<(numPay * payment) - loan<<endl;
   return 0;
}
 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 17) Stock Commission - Page 82                                               *
  *                                                                              *
  * Description: Kathryn bought 750 shares of stock at a price of $35.00 per     *
  * share. She must pay her stockbroker a 2% commission for the transaction.     *
  * Write a program that calculates and displays the following:                  *
  *                                                                              *
  * The amount paid for the stock alone (w/o commission)                         *
  * The amount of the commission                                                 *
  * The total amount paid (for stock plus commission)                            *
  ********************************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 float sharePrice = 35.00;    //price per share
 float commissionPer = 0.02;  //2% commission
 int numShares = 750;         //number of shares purchased
 float commission = 0;        //amount of commission
 float totalNoCom = 0;        //the total before commission 
 float total = 0;             //total amount paid with commission

//calculating amount paid before commission
totalNoCom = sharePrice * numShares;

//calculating the commission amount
commission = totalNoCom * commissionPer;

//calculating the total amount with commission
total = totalNoCom + commission;

cout<<"The amount paid for the stock before commission: $"<<totalNoCom<<endl;
cout<<"The amount of commission: $"<<commission<<endl;
cout<<"The total amount with commission: $"<<total<<endl;
   
    return 0;
}
  
  
 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 7) Box Office - Pg. 143                                                      *
  * Description: A movie theater only keeps a percentage of the revenue earned   *
  * ticket sales. The remainder goes to the movie distributor. Write a program   *
  * that calculates a theater's gross and net box office profit for a night. The *
  * program should ask for the name of the movie, and how many adult and child   *
  * tickets were sold. (The price of an adult ticket is $10.00 and a child's     *
  * ticket is $6.00.) It should display a report similar to                      *
  *                                                                              *
  * Movie Name:                      "Wheels of Fury"                            *
  * Adult Tickets Sold:               382                                        *
  * Child Tickets Sold:               127                                        *
  * Gross Box Office Profit:          $4582.00                                   *
  * Net Box Office Profit:            $ 916.40                                   *
  * Amount Paid to Distributor:       $3665.60                                   *
  ********************************************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
   string movieName;                     //name of movie
   float adultTicket = 10.00;            //price of adult ticket
   float childTicket = 6.00;             //price of child ticket
   int adultSold = 0;                    //number of adult tickets sold
   int childSold = 0;                    //number of child tickets sold
   float grossTotal = 0;                 //gross total of dales
   float netTotal = 0;                   //net total of sales
   float distributor = 0;                //amount paid to the distributor 
   float theaterPercent = 0.20;          //percentage the theater keeps 
   
   cout<<"Please enter the name of the movie:"<<endl;
   getline(cin, movieName);
   
   cout<<"How many adult tickets were sold:"<<endl;
   cin>>adultSold;
   
   cout<<"How many child tickets were sold:"<<endl;
   cin>>childSold;
   
   //calculating the total sales 
   grossTotal = (adultTicket * adultSold) + (childTicket * childSold);
   
   //calculating the amount paid to the distributor
   distributor = theaterPercent * grossTotal;
   
   //calculating the net total
   netTotal = grossTotal - distributor; 
   
   cout<<"Movie Name:                       "<<movieName<<endl;
   cout<<"Adult Tickets Sold:               "<<adultSold<<endl;
   cout<<"Child Tickets Sold:               "<<childSold<<endl;
   cout<<"Gross Box Office Profit:          $"<<grossTotal<<endl;
   cout<<"Net Box Office Profit:            $"<<netTotal<<endl;
   cout<<"Amount Paid to Distributor:       $"<<distributor<<endl;
   
    return 0;
}
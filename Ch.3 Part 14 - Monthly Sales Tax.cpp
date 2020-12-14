 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 14) Monthly Sales Tax = Pg. 144                                              *
  * Description: A retail company must file a monthly sales tax report listing   *
  * the sales for the month and the amount of sales tax collected. Write a       *
  * program that asks for the month, the year, and the total amount of sales tax *
  * collected at the cash register (that is, sales plus sales tax). Assume the   *
  * state sales tax is 4 percent and the county sales tax is 2 percent. If the   *
  * total amount collected is known and the total sales tax is 6 percent, the    *
  * amount of product sales may be calculated as:                                *
  *                                                                              *
  * S = T / 1.06                                                                 *
  * S is the product sales and T is the total income (product sales plus sales   *
  * tax). The program should display a report similar to:                        *
  *                                                                              *
  * Month: October                                                               *
  *---------------------                                                         *
  * Total Collected:     $26572.89                                               *
  * Sales:               $25068.76                                               *
  * County Sales Tax:    $  501.38                                               *
  * State Sales Tax:     $ 1002.75                                               *
  # Total Sales Tax:     $ 1504.13                                               *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  string month;
  int year;
  float salesTax;
  float stateTax = 0.04;
  float stateTotal;
  float countyTax = 0.02;
  float countyTotal;
  float totalSalesTax;
  float sales;
  float total;
  
  cout<<"Please enter the month: ";
  getline(cin, month);
  month[0] = toupper(month[0]);
  
  cout<<"Please enter the year: ";
  cin>>year;  
  
  cout<<"Enter the amount of sales for the year: ";
  cin>>sales;
  
  //amount of state sales tax 
  stateTotal = sales * stateTax;
  
  //amount of county sales tax
  countyTotal = sales * countyTax;
  
 //total sales tax
  totalSalesTax = stateTotal + countyTotal;
  
  //finding total collected, sales + tax
  total = sales + totalSalesTax;
  
  cout<<fixed<<setprecision(2)<<endl;
  
  cout<<endl<<endl;
  cout<<"Year: "<<year<<"      Month: "<<month<<endl;
  cout<<"-------------------------------------"<<endl;
  cout<<"Total Collected:              $"<<total<<endl;
  cout<<"Sales:                        $"<<sales<<endl;
  cout<<"County Sales Tax:             $"<<countyTotal<<endl;
  cout<<"State Sales Tax:              $"<<stateTotal<<endl;
  cout<<"Total Sales Tax:              $"<<totalSalesTax<<endl;
    return 0;
}
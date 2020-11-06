 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 3) Sales Tax - page 79                                                       *
  *                                                                              *
  * Description: Write a program that will compute the total sales tax on a $95  *
  * purchase. Assume the state sales tax is 4 percent and the county sales tax   *
  * is 2 percent                                                                 *
  ********************************************************************************/ 
  
  #include <iostream>
  #include <iomanip>
  
  using namespace std;
  
  int main()
  {
	  float totalSalesTax = 0;               //total amount of sales tax charged
	  float purchase = 95;                   //purchase price
	  float stateTax = 0.4;                  //amount of state sales tax 
	  float stateTotal = 0;                  //total amount of state sales tax charged
	  float countyTax = 0.2;                 //amount of county sales tax 
	  float countyTotal = 0;                 //total amount of county sales tax charged
	  
	  cout<<setprecision(2)<<fixed<<endl;    //sets number of decimal places
	  
	  //calculating the state total sales tax
	  stateTotal = purchase * stateTax;
	  cout<<"The state total on a $"<<purchase<< " is $"<<stateTotal<<endl;
	  
	  //calculating the county total sales tax
	  countyTotal = purchase * countyTax;
	  cout<<"The county total on a $"<<purchase<<" is $"<<countyTotal<<endl;
	  
	  //calculating the total sales tax on the purchase
	  totalSalesTax = stateTotal + countyTotal;
	  cout<<"The total sales tax on a $"<<purchase<<" is $"<<totalSalesTax<<endl;
	  
	  return 0;
	  
  }
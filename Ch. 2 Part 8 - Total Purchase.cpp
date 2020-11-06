 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 8) Total Purchase - Page 80                                                  *
  *                                                                              *
  * Description: A customer in a store is purchasing five items. The prices      *
  * of the five items are:                                                       *
  *                                                                              *
  * Item 1 = $15.95                                                              *
  * Item 2 = $24.95                                                              *
  * Item 3 = $6.95                                                               *
  * Item 4 = $12.95                                                              *
  * Item 5 = $3.95                                                               *
  *                                                                              *
  * Write a program that holds the prices of the five items in five variables.   *
  * Display each item's price, the subtotal of the sale, the amount of sales tax,*
  * and the total. Assume the sales tax is 7%.                                   *
  ********************************************************************************/ 
  
  #include <iostream>
  #include <iomanip>
  
  using namespace std;
  
  int main()
  {
	  //the 5 items 
	 float item1 = 15.95;
     float item2 = 24.95;
     float item3 = 6.95;
     float item4 = 12.95;
     float item5 = 3.95;

     float tax = .07;	       //amount of sales tax
	 float subtotal = 0;       //the subtotal of the sale before tax
	 float totalTax = 0;       //the total of the sales tax
	 float total = 0;          //the grand total 
	 
	 cout<<setprecision(2)<<fixed<<endl;
	 
	 //calculating the subtotal;
	 subtotal = item1 + item2 + item3 + item4 + item5;
	 
	 //calculating the total
	 totalTax = subtotal * tax;
	 total = totalTax + subtotal;
	 
	 cout<<"The subtotal of the items is: $"<<subtotal<<endl;
	 cout<<"The total of the items plus tax is: $"<<total<<endl;
	  
	  return 0;
  }
  
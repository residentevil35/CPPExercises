 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 4) Resturant Bill - Page 80                                                  *
  *                                                                              *
  * Description: Write a program that computes the tax and tip on a resturant    *
  * bill for a patron with a $88.67 meal charge. The tax should be 6.75 percent  *
  * of the meal cost. The tip should be 20 percent of the total after adding the *
  * tax. Display the meal cost, tax amount, tip amount, and total bill on the    *
  * screen.                                                                      *
  ********************************************************************************/ 
  
  #include <iostream>
  #include <iomanip>
  
  using namespace std;
  
  int main()
  {
	  
	 float meal = 88.67;                 //the price of the meal
         float tax = .0675;	                //the percent of sales tax
	 float tip = 0.20;                   //tip percentage 
	 float totalBill = 0;               //amount of the total bill after everything 
	 float taxBill = 0;                 //total after adding tax
	 float tipBill = 0;                 //total after adding tip 
	 
	 cout<<setprecision(2)<<fixed<<endl;
	 
	 //calculate sales tax
	 taxBill = meal * tax;
	 
	 //calculate tip
	 tipBill = meal * tip;
	 
	 //calculate total
	 totalBill = taxBill + tipBill + meal;
	 
	 cout<<"The cost of the meal: $"<<meal<<endl;
	 cout<<"Sales tax of 6.75%: $"<<taxBill<<endl;
	 cout<<"Tip amount of 20%: $"<<tipBill<<endl;
	 cout<<"The total bill amount including tax and tip: $"<<totalBill<<endl;
	 
	  return 0;
  }
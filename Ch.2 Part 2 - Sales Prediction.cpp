 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 2) Sales Prediction - page 79                                                *
  *                                                                              *
  * Description: The East Coast Sales division of a company generates 58 percent *
  * of total sales. Based on that percentage, write a program that will predict  *
  * how much the East Coast division will generate if the company has $8.6        *
  * million in sales this year.                                                  *
  ********************************************************************************/ 
  
  #include <iostream>
  #include <iomanip>

  using namespace std;
  
  int main()
  {
	  
	  float totalSales = 0;                               // how much the company will generate 
	  float sales = 8.6;                                  //$8.6 million 
	  float percent = 0.58;                               //58% of total sales 
	  
	  totalSales = sales * percent;
	  
	  cout<<"The East Coast Division will generate $"<<totalSales<<" million this year."<<endl;
	  return 0;
  }
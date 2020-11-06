 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 1) Sum of Two Numbers - page 79                                              *
  *                                                                              *
  * Description: Write a program that stores the integers 50 and 100 in          *
  * variables, and stores the sum of these two in a variable named total.        *
  ********************************************************************************/ 
  #include <iostream>
  
  using namespace std;
  
  int main()
  {
	  int num1 = 50;
	  int num2 = 100;
	  int total = 0;
	  
	  total = num1 + num2;
	  
	  cout<<"The total of "<<num1<<" and "<<num2<<" is "<<total<<endl;
	  return 0;
	  
  }
  
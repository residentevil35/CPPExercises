 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 5) Average of Values - Page 80                                               *
  *                                                                              *
  * Description: To get the average of a series of values, you add the values up *
  * and then divide the sum by the number of values. Write a program that stores *
  * the following values in five different variables: 28, 32, 37, 24, and 33. The*
  * program should first calculate the sum of these five variables and store the *
  * result in a separate variable named sum. Then, the program should divide the *
  * sum variable by 5 to get the average. Display the average on the screen.     *
  ********************************************************************************/ 
  
  #include <iostream>
  #include <iomanip>
  
  using namespace std;
  
  int main()
  {
	  //the 5 numbers 
	 int num1 = 28;
	 int num2 = 32;
	 int num3 = 37;
	 int num4 = 24;
	 int num5 = 33;
	 
	 float sum = 0;                //the sum of the numbers
	 float avg = 0;                //the average of the numbers
	 
	 //finding the sum of the values
	 sum = num1 + num2 + num3 + num4 + num5;
	 
	 avg = sum/5.0;
	 
	 cout<<"The sum of the numbers is: "<<sum<<endl;
	 cout<<"The average of the numbers is: "<<avg<<endl;
	  
	  return 0;
  }
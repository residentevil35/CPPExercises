 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 9) Cyborg Data Type Sizes - Page 81                                          *
  *                                                                              *
  * Description: You have been given a job as a programmer on a Cyborg           *
  * supercomputer. In order to accomplish some calculations, you need to know    *
  * how many bytes the following data types use: char, int, float, and double.   *
  * You do not have any manuals, so you can't look this information up. Write a  *
  * C++ program that will determine the amount of memory used by these types and *
  * display the information on the screen.                                       *
  ********************************************************************************/ 
  
  #include <iostream>
  #include <iomanip>
  
  using namespace std;
  
  int main()
  {
	  
	  cout<<"The size of a char is: "<<sizeof(char)<<" byte(s)"<<endl;
	  cout<<"The size of an int is: "<<sizeof(int)<<" byte(s)"<<endl;
	  cout<<"The size of a float is: "<<sizeof(float)<<" byte(s)"<<endl;
	  cout<<"The size of a double is: "<<sizeof(double)<<" byte(s)"<<endl;
	  
	  return 0;
	  
  }
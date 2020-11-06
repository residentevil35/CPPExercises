 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 7) Ocean levels - Page 80                                                    *
  *                                                                              *
  * Description: Assuming the ocean's level is currently rising at about 1.5     *
  * milimeters per year, write a program that displays:                          *
  *                                                                              *
  * The number of milimeters higher than the current level that the ocean's level*
  * will be in 5 years.                                                          *
  * The number of milimeters higher than the current level that the ocean's level*
  * will be in 7 years.                                                          *
  * The number of milimeters higher than the current level that the ocean's level*
  * will be in 10 years.                                                         *
  ********************************************************************************/ 
  
  #include <iostream>
  #include <iomanip>
  
  using namespace std;
  
  int main()
  {
	 float rise = 1.5;
	 
	 cout<<"After 5 years, the ocean's level will grow: "<<rise * 5<<endl;
	 cout<<"After 7 years, the ocean's level will grow: "<<rise * 7<<endl;
	 cout<<"After 10 years, the ocean's level will grow: "<<rise * 10<<endl;
	  
	  return 0;
  }
 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 5) Male and Female Percentages - Page 142                                    *
  *                                                                              *
  * Description: Write a program that asks the user for the number of males      *
  * and the number of females registered in a class. The program should display  *
  * the percentage of males and females in the class.                            *
  *                                                                              *
  * Hint: Suppose there are 8 males and 12 females in a class. There are 20      *
  * students in the class. The percentage of males can be calculated             *
  * as 8 / 20 = 0.4, or 40%. The percentage of females can be calculated         *
  * 12 / 20 = 0.6, or 60%.                                                       *
  ********************************************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  float males = 0;     //number of males in the class 
  float females = 0;   //number of females in the class
  float total = 0;     //total number of students   
  float perMales = 0;  //the percentage of males
  float perFem = 0;    //the percentage of females 
  
  cout<<fixed<<setprecision(1);
  cout<<"Enter the number of males in the class"<<endl;
  cin>>males;
  
  cout<<"Enter the number of females in the class"<<endl;
  cin>>females;
  
  //number of students all together 
  total = males + females;

  //calculating the percentage of males and females 
  perMales = males / total;
  perFem = females / total;
  
  cout<<"The percentage of males in the class is: "<<perMales<<" or "<<perMales * 100<<"%"<<endl;
  cout<<"The percentage of females in the class is: "<<perFem<<" or "<<perFem * 100<<"%";
    return 0; 
}
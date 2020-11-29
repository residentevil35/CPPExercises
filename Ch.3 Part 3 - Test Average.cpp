 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 3) Test Average - Page 142                                                   *
  *                                                                              *
  * Description: Write a program that asks for five test scores. The program     *
  * should calculate the average test score and display it. The number displayed *
  * should be formatted in fixed-point notation, with one decimal point of       *
  * precision.                                                                   *
  ********************************************************************************/
  
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int score1;          //the 5 test scores
   int score2;
   int score3;
   int score4;
   int score5; 
   
   float average = 0; //average of all the scores
   float count = 5.0; //number of scores 
   
   cout<<"Enter 5 test scores."<<endl;
   cin>>score1>>score2>>score3>>score4>>score5;
   
   average = (score1 + score2 + score3 + score4 + score5)/count;
   
   cout<<"The average score is: "<<average;
    return 0;
}
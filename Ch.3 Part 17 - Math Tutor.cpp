 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 17) Math Tutor - Pg. 145                                                     *
  * Description: Write a program that can be used as a math tutor for a young    *
  * student. The program should display two random numbers to be added, such as  *
  *  247                                                                         *
  * +129                                                                         *
  *------                                                                        *
  * The program should then pause while the student works on the problem. When   *
  * the student is ready to check the answer, he/she can press a key and the     *
  * program will display the correct solution.                                   *
  ********************************************************************************/
  
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int num1;             //the first number 
   int num2;             //the second number 
   int answer;           //the answer 
   char key;            //the key that will end the program 
   
   cout<<"Please enter the first number: ";
   cin>>num1;
   
   cout<<"Please enter the second number: ";
   cin>>num2;
   
   answer = num1 + num2;
   
   cout<<"System will pause while you work the program..."<<endl;
   cout<<"To see the answer, press Y"<<endl;
   cin>>key;
   
   //waiting on the correct key to end the program 
   if(key == 'y' || key == 'Y')
   {     
     cout<<num1<<" + "<<num2<<" = "<<answer; 
   }
   
   else
   {
       cout<<"You did not enter the correct character, Please run again.";
   }
   
    return 0;
}
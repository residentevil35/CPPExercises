 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 14) Personal Information - Page 81                                           *
  *                                                                              *
  * Description: Write a program that displays the following pieces of           *
  * information, each on a separate line:                                        *
  *                                                                              *
  * Your name                                                                    *
  * Your address, with city, state, and ZIP code                                 *
  * Your telephone number                                                        *
  * Your college major                                                           *
  *                                                                              *
  * Use only a single cout statement to display all the info                     *
  ********************************************************************************/

#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
    string name = "Rachel Coughanour";
    string address = "505 Anywhere Circle Beverly Hills, 90210";
    string phone = "256-555-5555";
    string major = "Computer Networking";
    
    cout<<name<<" "<<address<<" "<<phone<<" "<<major<<endl;       
           
    return 0;
}
  
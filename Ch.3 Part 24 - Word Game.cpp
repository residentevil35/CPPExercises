 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 24 Word Game - Pg. 146                                                       *
  * Description: Write a program that plays a word game with the user. The       *
  * program should ask the user to enter the following:                          *
  * His/Her name                                                                 *
  * His/her age                                                                  *
  * The name of the city                                                         *
  * The name of a college                                                        *
  * A profession                                                                 *
  * A type of animal                                                             *
  * A pet's name                                                                 *
  *                                                                              *
  * After the user has entered these items, the program should display the       *
  * following story, inserting the user's input into the appropriate locations:  *
  *                                                                              *
  * There once was a person named NAME who lived in CITY. At the age of AGE,     *
  * NAME went to college at COLLEGE. NAME graduated and went to work as a        *
  * PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They both lived    *
  * happily ever after!                                                          *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  string name;
  string city;
  string age;
  string college;
  string profession;
  string animal;
  string petname;

  cout<<"We are going to play a word game. I'm going to ask you to enter in some random info";
  cout<<" and we will use that to populate the paragraph. Let's get started!"<<endl;

  cout<<"Enter your name: ";
  getline(cin, name);
 
  cout<<"Enter your age: ";
  getline(cin, age);
  
  cout<<"Enter the name of your city: ";
  getline(cin, city);
  
  cout<<"Enter the name of a college: ";
  getline(cin, college);
  
  cout<<"Enter a profession: ";
  getline(cin, profession);
  
  cout<<"Enter a type of animal: ";
  getline(cin, animal);
  
  cout<<"Enter a pet's name: ";
  getline(cin, petname);
  
  cout<<"Result: "<<endl<<endl;
  
  cout<<"There once was a person named "<<name<<"who lived in "<<city<<". At the age of "<<age;
  cout<<", "<<name<<" went to college at"<<college<<"."<<name<<" graduated and went to work as a ";
  cout<<profession<<". Then, "<<name<<" adopted a(n) "<<animal<<" named "<<petname<<". They both lived ";
  cout<<"happily ever after.";
    
    return 0;
}
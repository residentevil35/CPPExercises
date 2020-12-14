 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 9) How Many Calories - Pg. 143                                               *
  * Description: A bag of cookies holds 30 cookies. The calorie information on   *
  * the bag claims that there are 10 "servings" in the bag and that a serving    *
  * equals 300 calories. Write a program that asks the user to input how many    *
  * cookies he or she actually ate and then reports how many total calories      *
  * were consumed.                                                               *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int servingCalorie = 300;            //the serving caloric amount
    int cookiesBag = 30;                 //how many cookies are in the bag
    int numServings = 10;                //number of servings per bag 
    int cookiesEaten = 0;                //number of cookies eaten 
    int caloriesEaten = 0;               //number of total calories eaten 
    int servingsEaten = 0;               //number of servings eaten 
    int cookiesPerServing = 0;           //how many cookies are in a serving
    
    cookiesPerServing = cookiesBag / numServings;
    
    cout<<"Enter how many cookies you ate: "<<endl;
    cin>>cookiesEaten;
    
    //calculating the number of servings eaten
    servingsEaten = cookiesEaten / cookiesPerServing;
    
    //calculating the number of calories eaten
    caloriesEaten = servingsEaten * servingCalorie;
    
    cout<<"Number of cookies in a bag: "<<cookiesBag<<endl;
    cout<<"Number of servings per bag: "<<numServings<<endl;
    cout<<"Number of calories per serving: "<<servingCalorie<<endl;
    cout<<"Calories Eaten: "<<caloriesEaten<<endl;
    return 0;
}
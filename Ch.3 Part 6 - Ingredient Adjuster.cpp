 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 6) Ingredient Adjuster - Page 143                                            *
  *                                                                              *
  * Description: A cookie recipe calls for the following ingredients:            *
  * 1.5 cups of sugar                                                            *
  * 1 cup of butter                                                              *
  * 2.75 cups of flour                                                           *
  *                                                                              *
  * The recipe produces 48 cookies with this amount of ingredients. Write a      *
  * program that asks the user how many cookies he or she wants to make, and then*
  * displays the number of cups of each ingredient needed for the specified      *
  * number of cookies.                                                           *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numCookies;              //the number of cookies to make
    float sugar = 1.5;           //the amount of sugar needed for a standard recipe
    float butter = 1;            //the amount of butter needed
    float flour = 2.75;          //the amount of flour needed 
    const float cookies = 48;    //the amount of cookies that the standard recipe makes
    float totalSugar = 0;        //total amount of sugar needed for the recipe
    float totalButter = 0;       //total amount of butter needed for the recipe
    float totalFlour = 0;        //total amount of flour needed for the recipe 
    
    cout<<"Please enter the amount of cookies you want to make:"<<endl;
    cin>>numCookies;
    
    //calculating the ingredients 
    totalSugar = (sugar * numCookies) / cookies;
    totalButter = (sugar * numCookies) / cookies;
    totalFlour = (sugar * numCookies) / cookies;
    
    cout<<fixed<<setprecision(1);
    cout<<endl;
    cout<<"To make "<<numCookies<<" cookies, you will need ";
    cout<<totalSugar<<" cups of sugar, "<<totalButter<<" cups of butter, and "<<totalFlour<<" cups of flour"<<endl;
    
    return 0;
}
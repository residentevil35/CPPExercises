 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 18) Energy Drink Consumption - Page 82                                       *
  *                                                                              *
  * Description: A soft drink company recently surveyed 16,500 of its customers  *
  * and found that approximately 15 percent of those surveyed purchase one or    *
  * more energy drinks per week. Of those customers who purchase energy drinks,  *
  * approximately 50% of them prefer citrus-flavored energy drinks. Write a      *
  * program that displays the following:                                         *
  *                                                                              *
  * The approximate number of customers in the survey who purchase one or more   *
  * energy drinks per week                                                       *
  * The approximate number of customers in the survey who prefer citrus-flavored *
  * energy drinks.                                                               *
  ********************************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int customers = 16500;   //number of customers surveyed
    float percentSur = 0.15; //number of customers who purchase one or more energy drinks
    float percentCitrus = 0.5; //number of customers who prefer citrus-flavored
    int totalCus = 0;        //total number of customers who purchased one or more drinks
    int totalCitrus = 0;    //the total number of customers who prefer citrus-flavored
    
    //calculating the number of customers who purchase one or more drinks
    totalCus = customers * percentSur;
    cout<<"Number of customers who purchase one or more energy drinks per week: "<<totalCus<<endl;
    
    //calculating the number of customers who prefer citrus-flavored
    totalCitrus = totalCus * percentCitrus;
    cout<<"Number of customers who prefer citrus-flavored drinks: "<<totalCitrus;
    return 0;
}
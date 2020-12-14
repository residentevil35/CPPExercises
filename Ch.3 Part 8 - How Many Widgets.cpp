 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 8) How Many Widgets? - Pg. 143                                               *
  * Description: The Yukon Widget Company manufacturers widgets that weigh 12.5  *
  * pounds each. Write a program that calculates how many widgets are stacked on *
  * a pallet, based on the total weight of the pallet. The program should ask the*
  * user how much the pallet weighs by itself and with the widgets stacked on it.*
  * It should then calculate and display the number of widgets stacked on the    *
  * pallet.                                                                      *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float widgetWeight = 12.5;           //the weight of each individual widget
  float palletWeight = 0;              //the weight of the pallet by itself
  int totalWidgets = 0;                //the total number of widgets
  float totalWidWeight = 0;            //the total weight of the widgets 
  float pallet_Wid_weight = 0;         //the weight of the pallet with the widgets 
  
  cout<<"Please enter how much the pallet weighs by itself: "<<endl;
  cin>>palletWeight;
  
  cout<<"Please enter the pallet weight with widgets stacked on it: "<<endl;
  cin>>pallet_Wid_weight;
  
  //calculating the total weight of the widgets
  totalWidWeight = pallet_Wid_weight - palletWeight;
  
  //calculating the total number of widgets 
  totalWidgets = totalWidWeight / widgetWeight;
         
  cout<<"The number of widgets stacked on the pallet is: "<<totalWidgets;  
    
    return 0;
}
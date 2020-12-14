 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 15) Property Tax - Pg. 144                                                   *
  * Description: A county collects property taxes on the assessment value        *
  * of property, which is 60 percent of the property's actual value. If an acre  *
  * of land is valued is $6,000. The property tax is then 75 cents for each      *
  * $100 of the assessment value. The tax for the acre assessed at $6,000 will be*
  * $45. Write a program that asks for the actual value of a piece of property   *
  * and displays the assessment value and property tax.                          *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float assessmentValPer = 0.60;    //the percentage of the assessment value 
  float assessmentVal;              //the assessment value 
  float actVal;                     //the actual value of the property
  float propertyTax;                //the property tax 
  float propertyTaxPer = 0.75;      //the property tax per $100
  
  cout<<"Please enter the actual value of the property: ";
  cin>>actVal;

  //calculating the assessment value 
  assessmentVal = actVal * assessmentValPer;
  
  //calculating the property tax 
  propertyTax = (assessmentVal / 100) * propertyTaxPer;
  
  cout<<endl<<endl;
  cout<<"Actual Value:              $"<<actVal<<endl;
  cout<<"Assessment Value:          $"<<assessmentVal<<endl;
  cout<<"Property Tax:              $"<<propertyTax<<endl;
    
    return 0;
}
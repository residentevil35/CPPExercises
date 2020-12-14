 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 16) Senior Citizen Property Tax - Pg. 144                                    *
  * Description: Madison County provides a $5,000 homeowner exemption for its    *
  * senior citizens. For example, if a senior's house is valued at $158,000      *
  * its assessed value would be $94,800. However, he would only pay tax on       *
  * $89,800. At last year's tax rate of $2.64 for each $100 of assessed value,   *
  * the property tax would be $2,370,72. In addition to the tax break, senior    *
  * citizens are allowed to pay their property tax in four equal payments. The   *
  * quarterly payment due on this property would be $592.68. Write a program     *
  * that asks the user to input the actual value of a piece of property and the  *
  * current tax rate for each $100 of assessed value. The program should then    *
  * calculate and report how much annual property tax a senior homeowner will    *
  * be charged for this property and what the quarterly tax bill will be.        *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float taxRate = 2.64;            //the tax rate for each $100
    float actVal;                    //the actual value of the property 
    float totalTax;                  //the total amount after exemptions
    float quarterlyBill;             //how much the quarterly payments will be 
    float assessmentValPer = 0.60;   //the assessment value percentage
    float assessmentVal;             //the assessment value 
    float exemption = 5000;          //the amount of exemption 
    
    cout<<fixed<<setprecision(2)<<endl;
    
    cout<<"Please enter the actual value of the property: ";
    cin>>actVal;
    
    //calculating the assessment value minus the senior exemption
    assessmentVal = (assessmentValPer * actVal) - exemption;
    
    //calculating the total tax amount 
    totalTax = (assessmentVal / 100) * taxRate;
    
    //how much the quarterly payments will be 
    quarterlyBill = totalTax / 4.0;
    
    cout<<"Assessment Value with exemption:           $"<<assessmentVal<<endl;
    cout<<"Total Tax Owed:                            $"<<totalTax<<endl;
    cout<<"Quarterly Payment:                         $"<<quarterlyBill<<"/mo"<<endl;
    
    return 0;
}
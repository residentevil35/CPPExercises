 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 22) Angle Calculator - Pg. 146                                               *
  * Description: Write a program that asks the user for an angle, entered in     *
  * radians. The program should then display the sine, cosine, and tangent of    *
  * the angle. (Use the sin, cos, and tan library functions to determine these   *
  * values.) The output should be displayed in fixed-point notation, rounded    *
  * to 4 decimal places.                                                         *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int angle;          //angle in radians
    float sinResult;    //the results for sin
    float cosResult;   //the results for cosine
    float tanResult;   //the results for tangent
    
    cout<<"Please enter the angle you wish to calculate in radians: ";
    cin>>angle;
    
    //calculating sine
    sinResult = sin(angle);
    
    //calculating cosine
    cosResult = cos(angle);
    
    //calculating tangent
    tanResult = tan(angle);
    
    cout<<fixed<<setprecision(4)<<endl;
    
    cout<<"The angle in radians: "<<angle<<endl;
    cout<<"The sine of the angle: "<<sinResult<<endl;
    cout<<"The cosine of the angle: "<<cosResult<<endl;
    cout<<"The tangent of the angle: "<<tanResult<<endl;
    return 0;
}
 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 4                                           *
  * 2) Roman Numeral Converter - Pg. 220                                         *
  * Description: Write a program that asks the user to enter a number within the *
  * range of 1 through 10. Use a switch statement to display the Roman numeral   *
  * version of that number.                                                      *
  * Input validation: Do not accept a number less than 1 or greater than 10.     *
  ********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    
    cout<<"Enter a number between 1 and 10: ";
    cin>>num;
    
    switch(num)
    {
        case 1: cout<<"The Roman Numeral version of 1 is I";
        break;
        
        case 2: cout<<"The Roman Numeral version of 2 is II";
        break;
        
        case 3: cout<<"The Roman Numeral version of 3 is III";
        break;
        
        case 4: cout<<"The Roman Numeral version of 4 is IV";
        break;
        
        case 5: cout<<"The Roman Numeral version of 5 is V";
        break;
        
        case 6: cout<<"The Roman Numeral version of 6 is VI";
        break;
        
        case 7: cout<<"The Roman Numeral version of 7 is VII";
        break;
        
        case 8: cout<<"The Roman Numeral version of 8 is VIII";
        break;
        
        case 9: cout<<"The Roman Numeral version of 9 is IX";
        break;
        
        case 10: cout<<"The Roman Numeral version of 10 is X";
        break;
        
        default: cout<<"You must enter a number between 1 - 10. Try again.";
    }
    return 0;
}
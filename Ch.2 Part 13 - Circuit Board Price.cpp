 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 13) Circuit Board Price - Page 81                                            *
  *                                                                              *
  * Description: An electronics company sells circuit boards at a 35 percent     *
  * profit. Write a program that will calculate the selling price of a circuit   *
  * board that costs $14.95. Display the result on the screen.                   *
  ********************************************************************************/
  
  #include<iostream>
  #include<iomanip>
  
  using namespace std;
  
  int main()
  {
    float profitPer = 0.35;  //35% profit of circuit boards
    float profit = 0;        //the profit calculated
    float price = 14.95;    //the price of the circuit board
    float sell = 0;         //the selling price 
    
    cout<<fixed<<setprecision(2);
    
    //calculating the profit 
    profit = profitPer * price; 
    
    //calculating the selling price
    sell = profit + price;
    
    cout<<"The selling price of the circuit board is: $"<<sell<<endl;
    return 0;
  }
  
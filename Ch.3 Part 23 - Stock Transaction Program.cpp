 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 3                                           *
  * 23) Stock Transaction Program - Pg. 146                                      *
  * Description: Last month Joe purchased some stock in Acme Software, Inc. Here *
  * are the details of the purchase:                                             *
  * The number of shares that Joe purchased was 1,000.                           *
  * When Joe purchased the stock, he paid $45.50 per share.                      *
  * Joe paid his stockbroker a commission that amounted to 2% of the amount he   *
  * paid for the stock.                                                          *
  *                                                                              * 
  * Two weeks later Joe sold the stock. Here are the details of the sale:        * 
  * The number of shares that Joe sold was 1,000                                 *
  * He sold the stock for $56.90 per share                                       *
  * He paid his stockbroker another commission that amounted to 2% of the amount *
  * he received for the stock.                                                   *
  *                                                                              *
  * Write a program that displays the following information:                     *
  * The amount of money Joe paid for the stock                                   *
  * The amount of commission Joe paid his broker when he bought the stock        *
  * The amount that Joe sold the stock for                                       *
  * The amount of commission Joe paid his broker when he sold the stock          *
  * Display the amount of profit that Joe made after selling his stock and      *
  * paying the two commissions to his broker. (If the amount of profit that your *
  * program displays is a negative number, then Joe lost money)                  *
  ********************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numShares = 1000;               //number of shares Joe purchased
    float pricePerShareBuy = 45.50;     //the price per share when Joe bought it
    float pricePerShareSold = 56.90;    //the price per share when Joe sold it 
    float commissionPer = 0.02;         //the percentage of the commission
    float commissionBuy;                //the amount of commission Joe paid his broker when he bought it
    float commissionSold;               //the amount of commission Joe paid his broker when he sold the stock
    float totalCostSharesBuy;           //how much Joe paid for the shares 
    float totalCostSharesSold;          //how much Joe sold the stocks for 
    float totalProfit;                  //profit Joe made 
    
    //calculating how much Joe spent when he bought the stock
    totalCostSharesBuy = (numShares * pricePerShareBuy);
    commissionBuy = totalCostSharesBuy * commissionPer;
    
    //adding commission amount to Joe's total
    totalCostSharesBuy += commissionBuy;
    
    cout<<"The total amount Joe paid for the stock including commission: $"<<totalCostSharesBuy<<endl;
    cout<<"The amount Joe paid to the broker when he bought the stock: $"<<commissionBuy<<endl;
    
    //calculating how much Joe sold the stock for 
    totalCostSharesSold = (numShares * pricePerShareSold);
    commissionSold = totalCostSharesSold * commissionPer;
    
    totalCostSharesSold += commissionPer;
    
    cout<<"The total amount Joe sold the stock for including commission: $"<<totalCostSharesSold<<endl;
    cout<<"The amount Joe paid to the broker when he sold the stock: $"<<commissionSold<<endl;
    
    //calculating Joe's profit 
    totalProfit = totalCostSharesSold - totalCostSharesBuy;
    
    cout<<"The total profit Joe made: $"<<totalProfit;
    
    return 0;
}
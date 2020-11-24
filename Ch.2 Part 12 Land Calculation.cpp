 /********************************************************************************
  * Rachel Coughanour                                                            *
  * Starting Out with C++ From Control Structures Through Objects 8th Edition    *              
  * Programming Challenges - Chapter 2                                           *
  * 12) Land Calculation - Page 81                                               *
  *                                                                              *
  * Description: One acre of land is equivalent to 43,560 sq ft. Write a program *
  * that calculates the number of acres in a tract of land with 391,876 sq ft.   *
  ********************************************************************************/
  
  #include<iostream>
  #include<iomanip>
  
  using namespace std;
  
  int main()
  {
    int acre = 43560;    //one acre of land 
    int tract = 391876;  //a tract of land
    int numAcres = 0;    //variable to hold the number of acres 
    
    numAcres = tract/acre;
    
    cout<<"The number of acres in a tract of land is: "<<numAcres;
	  
	  return 0;  
  }
  
/*
Enter temperature in Celsius  
5
5 in Fahrenheit is : 41


*/

#include<iostream>
using namespace std;

 //  Function to  convert celsius to fahrenheit 
  float   celsius_to_fahrenheit (float cel){

   float f = (1.8 *cel)+32;
    return f;
  }
    

int main()
{

    
   int no;
  cout<<"Enter temperature in Celsius  "<<endl;
  cin>>no;
  cout<<no <<" in Fahrenheit is : "<<celsius_to_fahrenheit(no);
 return 0;
}

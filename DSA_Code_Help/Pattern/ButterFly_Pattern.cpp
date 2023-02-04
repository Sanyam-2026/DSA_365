/*
Enter the no of rows
5
*         *
**       **
***     ***
****   ****
***** *****
***** *****
****   ****
***     ***
**       **
*         *



*/


#include<iostream>
using namespace std;

int main()
{

    
     int n;
cout<<"Enter the no of rows"<<endl;
cin >>n;
  

  //  Upper  Part 
for (int row = 0; row < n; row++)
{
  //  First 
   for(int col = 0; col<  row+1;col++){
     cout<<"*";
     
     }
// Second 

    for(int col = 0; col<2*n -  2*row-1;col++){
     cout<<" ";
     
     }
//  Third 
  for(int col = 0; col<  row+1;col++){
     cout<<"*";
     
     }
    cout<<endl;
}

  //  Lower Part 
for (int row = 0; row < n; row++)
{
  //  First 
   for(int col = 0; col< n- row;col++){
     cout<<"*";
     
     }
// Second 

    for(int col = 0; col<  2*row+1;col++){
     cout<<" ";
     
     }
//  Third 
  for(int col = 0; col< n- row;col++){
     cout<<"*";
     
     }
    cout<<endl;
}

 
 return 0;
}

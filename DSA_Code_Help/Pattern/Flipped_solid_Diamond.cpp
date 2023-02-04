/*
Enter the no of rows
6
****** ******
*****   *****
****     ****
***       ***
**         **
*           *
*           *
**         **
***       ***
****     ****
*****   *****
****** ******
 


*/

#include<iostream>
using namespace std;

int main()
{

    
     int n;
cout<<"Enter the no of rows"<<endl;
cin >>n;
//  Printing Upper Section 
for (int row = 0; row < n; row++)
{
  //  1st part of star 
       for ( int col = 0; col < n -row; col++)
    {
      cout<<"*";
    }
   //  2nd part of space
    for ( int col = 0; col < 2*row+1; col++)
    {
      cout<<" ";
    }
    //  3rd part of again star 
    for ( int col = 0; col < n-row; col++)
    {
      cout<<"*";
    }
   
    cout<<endl;
}
 

//  Now printing lower portion 
  for (int row = 0; row < n; row++)
{
  //  1st part 
       for ( int col = 0; col < row+1; col++)
    {
      cout<<"*";
    }
   //  2nd part 
    for ( int col = 0; col < 2*n-2*row-1; col++)
    {
      cout<<" ";
    }
    //  3rd part 
    for ( int col = 0; col <  row+1; col++)
    {
      cout<<"*";
    }
   
    cout<<endl;
}
 
     
     return 0;
}

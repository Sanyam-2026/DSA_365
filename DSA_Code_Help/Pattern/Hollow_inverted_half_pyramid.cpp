/*
Enter the no of rows
5
*****
*  *
* *
**
*


*/


#include<iostream>
using namespace std;

int main()
{

    
     int n;
cout<<"Enter the no of rows"<<endl;
cin >>n;
 
for (int row = 0; row < n; row++)
{
   
       for ( int col = 0; col <n-row; col++)
    {
      //  Condition for print all star in First line and print space in other lines 
       if(  row == 0  ||col== 0 || col == n-row-1)
         cout<<"*";
      else
         cout<<" ";
 
    }
  
   
    cout<<endl;
}
 
 
 

     
     return 0;
}

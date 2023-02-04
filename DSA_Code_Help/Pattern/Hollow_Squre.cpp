/*
Enter the no of rows
5
*****
*   *
*   *
*   *
*****


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
   
       for ( int col = 0; col <n; col++)
    {
      //  Condition for print all star in First and last line only 
       if(  row == 0 || row == n-1 ||col== 0 || col == n-1)
         cout<<"*";
      else
         cout<<" ";
 
    }
  
   
    cout<<endl;
}
 
 
 

     
     return 0;
}

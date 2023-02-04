/*

Enter the no of rows
6
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
      
*/


#include<iostream>
using namespace std;

int main()
{

    
     int n;
cout<<"Enter the no of rows"<<endl;
cin >>n;
//  Firstly printing the Upper Pyramid 
for (int row = 0; row < n; row++)
{
       for ( int col = 0; col < n-1-row; col++)
    {
     cout<<" ";
    }
    for (int star = 0; star < row+1; star++)
    {
      cout<<" *";
    }
  
    cout<<endl;
}
  
//    Now printing the Lower Pyramid 
for (int row = 0; row < n; row++)
{
       for ( int col = 0; col < row; col++)
    {
     cout<<" ";
    }
    for (int star = 0; star <n- row; star++)
    {
      cout<<" *";
    }
  
    cout<<endl;
}
     
     return 0;
}

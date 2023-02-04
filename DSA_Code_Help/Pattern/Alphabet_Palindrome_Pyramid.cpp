/*
Enter the no of rows
6
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
ABCDEFEDCBA



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
   //  printing in Incresing order 
       for ( int col = 0; col <   row+1; col++)
    {
      int ans = col+1;
      // Mapping ans to Charcter 
      char ch = ans +'A'-1;
      cout<<ch;
 
    }
  //  printing in reverse order 
   for ( int col = row ; col>0; col--)
    {
      int ans = col;
      char ch = ans +'A'-1;
      cout<<ch;
 
    }
   
    cout<<endl;
}
     return 0;
}

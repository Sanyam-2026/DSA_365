/*
Enter the no of rows
5
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
 

*/


#include<iostream>
using namespace std;

int main()
{

    
     int n;
cout<<"Enter the no of rows"<<endl;
cin >>n;
 //  Printing the upper Part 
for (int row = 0; row < n; row++)
{
   
       for ( int col = 0; col <  row+1; col++)
    {
      cout<<row+1;

      // Condition for not printing star after last charcter 
      if(col!= row)
        cout<<"*";
    }
    
   
    cout<<endl;
}
 
//  Printing lower part 
 for (int row = 0; row < n; row++)
{
   
       for ( int col = 0; col < n-row; col++)
    {
      cout<<n-row;
      if(col!= n-row-1)
        cout<<"*";
    }
    
   
    cout<<endl;
}
 

     
     return 0;
}

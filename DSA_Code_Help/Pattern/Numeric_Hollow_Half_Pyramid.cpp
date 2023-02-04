/*
Enter the no of rows
6
1
12
1 3
1  4
1   5
123456





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

  for(int col = 0; col< row+1;col++){
    if(row==0 || row == n-1 || col == 0 || col==row )
     cout<<col+1;
    else
      cout<<" ";
  }
     

    cout<<endl;
}
 return 0;
}

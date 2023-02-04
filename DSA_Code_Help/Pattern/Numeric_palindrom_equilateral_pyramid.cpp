/*
Enter the no of rows
5
     1
    121
   12321
  1234321
 123454321



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
  //  First part 
  for(int col = 0; col< n-row;col++){
      cout<<" ";
  }
     //  Second part 
   for(int col = 0; col< row+1;col++){
      cout<<col+1;
  }
   //  Third part 
   for(int col = row; col>0;col--){
      cout<<col;
  }

    cout<<endl;
}
 return 0;
}

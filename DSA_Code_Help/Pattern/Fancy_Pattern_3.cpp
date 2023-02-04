#include<iostream>
using namespace std;

int main()
{

    
     int n;
cout<<"Enter the no of rows"<<endl;
cin >>n;
 
for (int row = 0; row < n; row++)
{
 
   
     
   for(int col = 0; col< 2*row+1;col++){
     if(col==0 || col == 2*row)
      cout<<"*";
     else 
       cout<<col;
  }
  // for(int col = row ; col>0; col --)
  //   cout<<col;
    cout<<endl;
}
 return 0;
}

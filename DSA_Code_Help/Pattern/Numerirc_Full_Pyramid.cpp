/*
Enter the no of rows
5
    1
   232
  34543
 4567654
567898765


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

  //  For printing White spaces 
  for(int col =0; col<n-row-1;col++){
    cout<<" ";
  }
//  For printing numbers 
  for(int col = 0; col< row+1;col++){
    cout<<row+1+col;
     
    
  }
   //  For printing numbers in Reverse order 
 int start = 2*row;
 for(int col = 0; col< row;col++){
    cout<<start;
     start--;
    
  }
    cout<<endl;
}
 return 0;
}

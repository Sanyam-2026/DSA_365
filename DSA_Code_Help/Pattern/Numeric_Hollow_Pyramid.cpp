/*
Enter the no of rows
10
         1
        1 2
       1   3
      1     4
     1       5
    1         6
   1           7
  1             8
 1               9
1 2 3 4 5 6 7 8 9 10


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
//  For printing first and last line  
  int start =1;
 for(int col = 0; col <2*row+1;col++){

if (row == 0 || row == n-1){
  
if(col%2== 0 ){
  cout<<start;
  start++;
}
  else
  cout<<" ";
}
else if(col == 0 ){
  cout<<"1";
}
else if(col == 2*row){
  cout<<row+1;
}
else{
  cout<<" ";
}
 }
    cout<<endl;
}
 return 0;
}

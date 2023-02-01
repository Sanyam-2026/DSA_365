#include<iostream>
using namespace std;

int main()
{
   
     int row_count;
cout<<"Enter the No. of row in  Inverted Full pyramid pattern"<<endl;
cin >>row_count;

for (int row = 0; row < row_count; row++)
{
       for ( int col = 0; col <  row; col++)
    {
     cout<<" ";
    }
    for (int star = 0; star < row_count-row; star++)
    {
      cout<<"* ";
    }
  
    cout<<endl;
}

     
     return 0;
}

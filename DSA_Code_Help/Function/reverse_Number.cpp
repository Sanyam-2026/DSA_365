/*
Enter the number  
1234567
7 6 5 4 3 2 1 

*/

#include<iostream>
using namespace std;
void reverse_number( int n){

  while(n!=0){
    int digit = n%10;
   cout<<digit<<" ";
   n/=10;
 }
 
}
int main()
{
 
     int n;
cout<<"Enter the number  "<<endl;
cin >>n;
  reverse_number(n);
     return 0;
}

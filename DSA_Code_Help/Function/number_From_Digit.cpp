/*
Enter the Digits
1 2 3 4 5
The number is :1234

*/

#include<iostream>
using namespace std;
void  digit_To_Number (int arr[],int n){

   int ans =0;
  for(int i =0; i<n; i++){
     ans = ans*10+arr[i];
  }
  cout<<"The number is :"<<ans;
}
int main()
{
 
     int n;
cout<<"Enter the no. of digits you want to make no   "<<endl;
cin >>n;

  int digits[n];
  cout<<"Enter the Digits"<<endl;
  for(int i =0;i<n;i++){
    cin>>digits[i];
  }
  digit_To_Number(digits,n);
   
     return 0;
}

/*

Enter the no. to check Even or Odd 
5
5 is a Odd number 

*/

#include<iostream>
using namespace std;

 //  Function to check given no. is even or odd 

void check_Even_Odd(int n){

  int number = n;
  if(number %2 ==0){
    cout<< number <<" is a Even number "<<endl;
  }
  else{
     cout<< number <<" is a Odd number "<<endl;
  }
}
int main()
{

    
   float no;
  cout<<"Enter the no. to check Even or Odd "<<endl;
  cin>>no;
  check_Even_Odd( no);
 return 0;
}

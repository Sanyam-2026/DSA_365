/*
Enter the no. to  Calculate factorial  
3
Factorial of 3 is : 6


*/

#include<iostream>
using namespace std;

 //  Function to  calculate Factorial of given no  

 int calculate_Factorial ( int n){

  int fact = 1;
   
  for(int i=1; i<=n;i++){

    fact = fact*i;
  }
   return fact ; 
}
int main()
{

    
   int no;
  cout<<"Enter the no. to  Calculate factorial  "<<endl;
  cin>>no;
   cout<<"Factorial of "<<no <<" is : "<<calculate_Factorial(no);
 return 0;
}

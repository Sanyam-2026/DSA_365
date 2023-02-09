/*
Enter the no. to count set bit
3
No. of Set bit in 3 is : 2
*/
#include<iostream>
using namespace std;
void count_Set_Bit(int n ){
  cout<<"No. of Set bit in "<<n<<" is : ";
  int count =0;
while(n!= 0){

   if(n&1){
     count++;
   }
   
 n =  n >> 1;
}
 cout<<count;
  
}
int main()
{
 
     int n;
cout<<"Enter the no. to count set bit"<<endl;
cin >>n;
count_Set_Bit(n);
   
   
   
     return 0;
}

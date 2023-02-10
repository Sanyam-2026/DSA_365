/*
Enter the range to print Prime No .  
5
2 3 5 
*/
#include<iostream>
using namespace std;

 //  Function to  check Prime no  

 bool check_Prime ( int n){

  for(int i=2; i<n;i++){
    if(n%i==0){
    return false; 
    }
    }
    return true;
  }
    

int main()
{

    
   int no;
  cout<<"Enter the range to print Prime No .  "<<endl;
  cin>>no;
   for(int i =2 ; i<=no;i++){
     if(check_Prime(i)){
       cout<<i<<" ";
       
     }
     
   }
 return 0;
}

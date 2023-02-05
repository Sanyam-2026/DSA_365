/*
Enter the no. to  check Prime 
44
44 is not a prime no .

*/

#include<iostream>
using namespace std;

 //  Function to  check Prime no  

 void   check_Prime ( int n){

  bool is_prime= true;
   
  for(int i=2; i<n;i++){

    if(n%i==0){
      is_prime=false;
      break;
    }
    }
    if(is_prime ){
     cout<< n<<" is prime no ."<<endl;
    }
      else{
     cout<< n<<" is not a prime no ."<<endl;
    }
  }
    

int main()
{

    
   int no;
  cout<<"Enter the no. to  check Prime "<<endl;
  cin>>no;
  check_Prime(no);
 return 0;
}

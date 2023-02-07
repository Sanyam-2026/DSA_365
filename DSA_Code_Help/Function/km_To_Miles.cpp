/*

Enter  distance in km   
56
56 km in miles  is : 34.7968
 
*/
#include<iostream>
using namespace std;

 //  Function to  convert  km to miles
  float   km_To_Miles (float km){

   float miles = km * 0.62137119 ;
    return miles;
  }
    

int main()
{

    
   int km;
  cout<<"Enter  distance in km   "<<endl;
  cin>>km;
  cout<<km <<" km in miles  is : "<< km_To_Miles(km);
 return 0;
}

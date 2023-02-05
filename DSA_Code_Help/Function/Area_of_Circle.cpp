//  Function to display area of circle 

/*
Enter the radius of the Circle
5
Area of Circle of Radius 5 is : 78.5
*/

#include<iostream>
using namespace std;

//  Function to calculate area of Circle 
float Circle_area(float r){
float radius = r;
  return 3.14*radius*radius;

  
}
int main()
{

    
   float r ;
  cout<<"Enter the radius of the Circle"<<endl;
  cin>>r;
 cout<<"Area of Circle of Radius "<<r<<" is : "<<Circle_area(r);
 return 0;
}


//  Program to Print Gabber Pattern
#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the Line you want to print in Gabbar Pattern"<<endl;
     cin>>n;
     int i=1;
     while (i<n){
        //  part 1 : for printing numbers in 1st part
        int j =1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j=j+1;
        }
        //  part 2 : for printing  Stars in 2nd  part
        j =1;
        while(j<=(i-1)+2){
            cout<<"* ";
            j=j+1;
        }
        //  part 3 : for printing  Numbers in 3rd  part
        j =n-i+1;
        while(j >=1){
            cout<<j<<" ";
            j=j-1;
        }
        i=i+1;
        cout<<endl;
     } 
     return 0;
}

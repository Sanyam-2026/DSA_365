
/*
Enter the no of rows
6
     *  
    *  *  
   *    *  
  *      *  
 *        *  
*          *  
*          * 
 *        * 
  *      * 
   *    * 
    *  * 
     * 
 

*/


#include<iostream>
using namespace std;

int main()
{

    
     int n;
cout<<"Enter the no of rows"<<endl;
cin >>n;

for (int row = 0; row < n; row++)
{
       for ( int col = 0; col < n-1-row; col++)
    {
     cout<<" ";
    }
    for (int col = 0; col<2*(row+1); col++)
    {

      if(col  ==  0 || col == 2*row)
      cout<<"* ";
      else 
        cout<<" ";
    }
  
    cout<<endl;
}
for (int row = 0; row < n; row++)
{
       for ( int col = 0; col < row; col++)
    {
     cout<<" ";
    }
    for (int col = 0; col <2*n- 2*row-1; col++)
    {
        if(col  ==  0 || col == 2*n-2*row-2)
      cout<<"* ";
      else 
        cout<<" ";
    }
  
    cout<<endl;
}
     
     return 0;
}

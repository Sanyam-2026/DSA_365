/*

Enter the size of Array 
5
1 1 2 3 3
Unique element is 2

*/

#include <iostream>
#include <vector>
using namespace std;

   
  int findUnique(vector <int> arr ){
    int ans = 0;
     for(int i =0; i<arr.size(); i++){
     ans = ans^arr[i];    
  }
     return ans;
    }
int main()
{

    
  int n;
  cout<<"Enter the size of Array "<<endl;
  cin >>n;
  vector<int>arr (n);
  for(int i =0; i<arr.size(); i++){
    cin>>arr[i];
  }
  int uniqueElement=findUnique(arr);
  cout<<"Unique element is "<<uniqueElement;
 return 0;
}

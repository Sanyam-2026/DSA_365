#include <iostream>
#include<vector>
using namespace std;

void printSubsequences(string str,  string output, int i, vector<string>& v) {
  //base case
  if(i == str.length() ) {
    v.push_back(output);
    return;
  }

  //include
  printSubsequences(str, output + str[i], i+1,v);

  //exclude
  printSubsequences(str, output, i+1,v);


}

int main() {
  string str = "abcd";
  string output = "";
  vector<string> v;
  int i = 0;
  printSubsequences(str, output, i, v);

  cout << "Printing all subsequences " << endl;
  for(auto val: v) {
    cout << val << " " ; 
  }

  cout << endl << "Size of vector is: " << v.size() << endl;

  return 0;
}



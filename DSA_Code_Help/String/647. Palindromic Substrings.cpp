 #  Question Link  - https://leetcode.com/problems/palindromic-substrings/


class Solution {
public:
    
    int checkAround(string s , int i , int j){
      int count = 0;
        
        while(i>=0 && j<s.length() && s[i] == s[j]){
            count ++;
            i--;
            j++;
            
        }
        
       return count ; 
    }
    
    int countSubstrings(string s) {
        int count = 0;
    for(int i =0 ; i<s.length(); i++){
        int oddKaAns = checkAround(s,i,i);
        count +=oddKaAns;
        
        int evenKaAns = checkAround(s,i,i+1);
        count +=evenKaAns;
    }
        
        return count;
    }
};

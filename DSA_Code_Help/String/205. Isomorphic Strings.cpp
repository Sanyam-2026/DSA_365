//  Question Link - https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        int isCharMapped[256] ={0};
        
        for(int i =0 ; i<s.size(); i++){
            if(hash[s[i]] == 0 && isCharMapped[t[i]] ==0){
                hash[s[i]] = t[i];
                isCharMapped[t[i]] = 1;
            }
            
            
        }
        for(int i =0 ; i<s.size() ; i++){
            if(hash[s[i]] != t[i]) return false;
        }
        return true;
    }
};

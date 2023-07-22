//  Question Link - https://leetcode.com/problems/count-primes/


class Solution {
public:
    int countPrimes(int n) {
        if (n==0) return 0;
        // Firstly Declare All no as prime
        vector<bool> prime(n,true);
        
        int count =0;
      //  start from 2 and check it for prime
        for(int i =2 ; i<n;i++){
            if(prime[i] ==true) {
                count++;
                         
                     int j = 2*i;
                while(j<n){
                    //  Mark all multiples as Non Prime / False
                    prime[j]  = false;
                  // Increment by Using Iterater I 
                    j+=i;
                }
                         
                         }
            
        }
        return count;
    }
};

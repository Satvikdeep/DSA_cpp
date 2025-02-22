#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long gcd = 1;
        for (long long i=1; i<=min(A,B); i++){
            if (A%i==0 && B%i == 0){
                gcd=i;
                continue;
            }
        }
        long long lcm = (A *B)/ gcd;
    
        
        return {lcm, gcd};
        
    }
};

33,24
9,24
9,15
9,6
3,0

x = gcd(A,B)
A=temp
B=A-B


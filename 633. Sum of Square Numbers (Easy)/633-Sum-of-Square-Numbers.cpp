#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        
        // bool result{false};        

        int left = 0;
        int right = (int)sqrt(c);
        
        if(c < 0){
            return false;
        }

        while(left <= right){

            // int cal = left^2 + right^2;
            long long cal = (long long) left * left + right * right;
            
            if(cal == c){
                // result = true;
                return true;
            }
            else if(cal < c){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }
};
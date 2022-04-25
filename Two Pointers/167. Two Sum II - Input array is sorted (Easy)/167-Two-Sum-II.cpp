#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        if(numbers.size() == 0){
            return vector<int>{};
        }
        else{
            int left = 0;
            int right = numbers.size() - 1;

            while(left < right){
                
                int cal = numbers[left] + numbers[right];

                if(cal < target){
                    left++;
                }
                else if(cal > target){
                    right--;
                }
                else if(cal == target){
                    return vector<int>{left+1, right+1};
                }
            }
        }
        return vector<int>{};
    }
};
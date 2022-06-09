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

// Runtime: 16 ms, faster than 67.85% of C++ online submissions for Two Sum II - Input Array Is Sorted.
// Memory Usage: 15.6 MB, less than 44.00% of C++ online submissions for Two Sum II - Input Array Is Sorted.
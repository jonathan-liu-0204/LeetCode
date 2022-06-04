class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size() == 0){
            return 0;
        }
        
        int sum = nums[0];
        int max_sum = sum;
        
        for(int i = 1; i < nums.size(); i++){
            if(sum > 0){
                sum = sum + nums[i];
            }
            else{
                sum = nums[i];
            }
            
            max_sum = max(sum, max_sum);
        }
        
        return max_sum;
    }
};

// Runtime: 120 ms, faster than 83.97% of C++ online submissions for Maximum Subarray.
// Memory Usage: 67.6 MB, less than 99.49% of C++ online submissions for Maximum Subarray.

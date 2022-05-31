class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        int count = 0;
        
        for(int i = 1; i < nums.size(); i++){
            
            if(nums[i] < nums[i-1]){
                count++;
                
                if(i >= 2 && nums[i-2] > nums[i]){
                    nums[i] = nums[i-1];
                }
                else{
                    nums[i-1] = nums[i];
                }
            }
            
            if(count > 1){
                return false;
            }
        }
        return true;
    }
};

// Runtime: 40 ms, faster than 41.42% of C++ online submissions for Non-decreasing Array.
// Memory Usage: 26.9 MB, less than 80.97% of C++ online submissions for Non-decreasing Array.
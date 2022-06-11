class Solution {
public:
    int minOperations(vector<int>& nums, int x){
        
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
        }
        
        if(sum < x){
            return -1;
        }
        
        int left = 0;
        int right = 0;
        int current_sum = 0;
        int ans = -1;
        
        while(right < nums.size()){
            
            current_sum += nums[right];
            
            while(current_sum > sum - x && left <= right){
                current_sum -= nums[left];
                left++;
            }
            
            if(current_sum == sum - x){
                ans = max(ans, right - left + 1);
            }
            
            right++;
        }
        
        if(ans == -1){
            return ans;
        }
        
        return nums.size() - ans;
    }
};

// Runtime: 184 ms, faster than 88.10% of C++ online submissions for Minimum Operations to Reduce X to Zero.
// Memory Usage: 98.4 MB, less than 90.95% of C++ online submissions for Minimum Operations to Reduce X to Zero.
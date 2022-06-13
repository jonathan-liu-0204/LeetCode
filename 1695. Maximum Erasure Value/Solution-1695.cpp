class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int current_sum = 0;
        int ans = 0;
        int left = 0;
        
        unordered_set<int> seen;
        
        for(int num : nums){
            while(seen.find(num) != seen.end()){
                current_sum -= nums[left];
                seen.erase(nums[left]);
                left++;
            }
            
            current_sum += num;
            seen.insert(num);
            ans = max(ans, current_sum);
        }
        
        return ans;
    }
};

// Runtime: 568 ms, faster than 40.96% of C++ online submissions for Maximum Erasure Value.
// Memory Usage: 127.1 MB, less than 35.59% of C++ online submissions for Maximum Erasure Value.
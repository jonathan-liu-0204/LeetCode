class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        
        vector<int> ans;
        
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

// Runtime: 599 ms, faster than 23.35% of C++ online submissions for Two Sum.
// Memory Usage: 10.3 MB, less than 71.66% of C++ online submissions for Two Sum.
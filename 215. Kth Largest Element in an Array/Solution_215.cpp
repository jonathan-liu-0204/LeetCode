class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int big = nums[nums.size() - 1] + 1;
        int count = 0;
        
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] <= big){
                count++;
                big = nums[i];
            }
            
            if(count == k){
                return big;
            }
        }
        return 0;
    }
};
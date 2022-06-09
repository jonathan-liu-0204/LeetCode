class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size() - 1;
        
        while(left < right){
            
            if(nums[left] < nums[right]){
                return nums[left];
            }
            
            int tmp = (left + right) / 2;
            
            if(nums[tmp] > nums[right]){
                left = tmp + 1;
            }
            else{
                right = tmp;
            }
        }
        return nums[left];
    }
};

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find Minimum in Rotated Sorted Array.
// Memory Usage: 10.1 MB, less than 72.47% of C++ online submissions for Find Minimum in Rotated Sorted Array.
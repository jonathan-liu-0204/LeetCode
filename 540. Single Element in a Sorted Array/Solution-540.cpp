// O(log(n)) Solution

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        // binary search
        
        int lo = 0;
        int hi = nums.size() / 2;
        
        while(lo < hi) {
            int m = (lo + hi) / 2;
            
            if(nums[2*m] != nums[2*m+1]){
                hi = m;
            }
            else{
                lo = m+1;
            }
        }
        return nums[2*lo];
    }
};

// Runtime: 53 ms, faster than 13.38% of C++ online submissions for Single Element in a Sorted Array.
// Memory Usage: 22.3 MB, less than 91.09% of C++ online submissions for Single Element in a Sorted Array.

// ===============================================================
// O(n) Solution
// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
        
//         if(nums.size() == 1){
//             return nums[0];
//         }
        
//         if(nums[0] != nums[1]){
//             return nums[0];
//         }
        
//         for(int i = 1; i <= nums.size()-1; i++){
//             if(nums[i] != nums[i-1] && nums[i] != nums[i+1]){
//                 return nums[i];
//             }
//         }
        
//         return nums[-1];
//     }
// };

// Runtime: 32 ms, faster than 68.45% of C++ online submissions for Single Element in a Sorted Array.
// Memory Usage: 22.3 MB, less than 55.36% of C++ online submissions for Single Element in a Sorted Array.
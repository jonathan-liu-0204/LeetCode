class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target){
        
        int first = getHead(nums, target);
        int last = getHead(nums, target + 1) - 1;
        
        if (first == nums.size() || nums[first] != target){
            vector<int> ans;
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        else{
            vector<int> ans;
            ans.push_back(first);
            ans.push_back(max(first, last));
            return ans;
        }
    }
    
private:
    int getHead(vector<int>& nums, int target){
        
        int left = 0;
        int right = nums.size();
        
        while(left < right){
            int mid = (left + right - 1) / 2;
            
            if(nums[mid] >= target){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};

// Runtime: 23 ms, faster than 5.58% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
// Memory Usage: 13.7 MB, less than 18.27% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
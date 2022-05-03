class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        
        int left = sorted_nums.size();
        int right = 0;
        
        for(int i = 0; i < sorted_nums.size(); i++){
            if(sorted_nums[i] != nums[i]){
                left = min(left, i);
                right = max(right, i);
            }
        }
                
        if(right < left){
            return 0;
        }
        else{
            return (right - left + 1);
        }
    }
};
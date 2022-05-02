class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> a, b;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2){
                b.push_back(nums[i]);
            }
            else{
                a.push_back(nums[i]);
            }
        }
        
        a.insert(a.end(), b.begin(), b.end());
        return a;
    }
};
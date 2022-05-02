class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> a, b;
        
        for( auto &iter : nums){
            if(iter % 2){
                b.push_back(iter);
            }
            else{
                a.push_back(iter);
            }
        }
        
        a.insert(a.end(), b.begin(), b.end());
        return a;
    }
};
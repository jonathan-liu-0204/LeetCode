class Solution {
public:
    
    static bool sortcol( const vector<int>& v1, const vector<int>& v2 ) {
        return v1[1] > v2[1];
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> count;
        int previous = -200;
        int index = -1;        
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != previous){
                
                vector<int> tmp_count;
                
                tmp_count.push_back(nums[i]);
                tmp_count.push_back(1);
                
                count.push_back(tmp_count);
                
                previous = nums[i];
                index += 1;
            }
            else{
                count[index][1] += 1;
            }
        }
    
        sort(count.begin(), count.end(), sortcol);
        
        vector<int> answer;
        
        for(int i = 0; i < k; i++){
            answer.push_back(count[i][0]);
        }
        
        return answer;
    }
};
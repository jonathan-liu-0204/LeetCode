class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        vector<int> record(26, 0);
        vector<int> ans;
        
        for(int i = 0; i < s.length(); i++){
            record[s[i] - 'a'] = i;
        }
        
        for(int i = 0; i < s.length(); i++){
            
            int end = record[s[i]-'a'];
            
            for(int j = i; j < end; j++){
                
                if(record[s[j] - 'a'] > end){
                    end = record[s[j]-'a'];
                }
            }
            
            ans.push_back(end - i + 1);
            i = end;
        }
        
        return ans;
    }
};


// Runtime: 10 ms, faster than 22.29% of C++ online submissions for Partition Labels.
// Memory Usage: 6.5 MB, less than 88.01% of C++ online submissions for Partition Labels.
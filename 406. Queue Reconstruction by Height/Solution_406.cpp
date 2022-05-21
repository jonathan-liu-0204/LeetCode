class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        sort(people.begin(), people.end(), [](vector<int> v1, vector<int> v2){
            if(v1[0] == v2[0]){
                return v1[1] < v2[1];
            }
            return v1[0] > v2[0];
        });
        
        vector<vector<int>> answer;
        
        for(int i = 0; i < people.size(); i++){                                 
            answer.insert(answer.begin() + people[i][1], people[i]);   
        }
        
        return answer;
    }
};

// Runtime: 443 ms, faster than 5.10% of C++ online submissions for Queue Reconstruction by Height.
// Memory Usage: 24.8 MB, less than 8.33% of C++ online submissions for Queue Reconstruction by Height.
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        for(int i = triangle.size() - 2; i >= 0; i--){
            for(int j = 0; j < triangle[i].size(); j++){
                
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
            }
        }
        
        return triangle[0][0];
    }
};

// Runtime: 17 ms, faster than 8.96% of C++ online submissions for Triangle.
// Memory Usage: 8.7 MB, less than 70.75% of C++ online submissions for Triangle.

// Reference: https://hackmd.io/@Zero871015/LeetCode-120
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int tmp = 0;
        
        int r = matrix.size();
        int c = matrix[0].size();
        
        vector<vector<int>> ans;
        vector<int> tmp_row = {};
        
        for(int i = 0; i < c; i++){
            tmp_row = {};
            for(int j = 0; j < r; j++){
                tmp_row.push_back(matrix[j][i]);
            }
            ans.push_back(tmp_row);
        }

        return ans;
    }
};

// Runtime: 13 ms, faster than 73.06% of C++ online submissions for Transpose Matrix.
// Memory Usage: 10.7 MB, less than 43.03% of C++ online submissions for Transpose Matrix.
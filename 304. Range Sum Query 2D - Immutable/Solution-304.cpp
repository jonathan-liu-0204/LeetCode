class NumMatrix {
    
    vector<vector<int>> dp;

public:
    NumMatrix(vector<vector<int>>& M) {
        
        int ylen = M.size() + 1;
        int xlen = M[0].size() + 1;
        
        dp = vector<vector<int>>(ylen, vector<int>(xlen, 0));
        
        for (int i = 1; i < ylen; i++){
            for (int j = 1; j < xlen; j++){
                dp[i][j] = M[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
            }
        }
    }

    int sumRegion(int R1, int C1, int R2, int C2) {
        
        int ans = dp[R2+1][C2+1] - dp[R2+1][C1] - dp[R1][C2+1] + dp[R1][C1];
        
        return ans;
    }
};

// Runtime: 554 ms, faster than 61.80% of C++ online submissions for Range Sum Query 2D - Immutable.
// Memory Usage: 148 MB, less than 48.25% of C++ online submissions for Range Sum Query 2D - Immutable.

// Reference: https://dev.to/seanpgallivan/solution-range-sum-query-2d-immutable-9ic
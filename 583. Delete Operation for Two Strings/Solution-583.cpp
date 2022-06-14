class Solution {
public:
    int minDistance(string word1, string word2) {
        
        vector<vector<int> > dp(word1.length()+1, vector<int>(word2.length()+1, 0));
        
        for (int i = 0; i <= word1.length(); i++) {
            for (int j = 0; j <= word2.length(); j++) {
                
                if(i == 0 || j == 0){
                    continue;
                }
                if(word1[i - 1] == word2[j - 1]){
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else{
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        return word1.length() + word2.length() - 2 * dp[word1.length()][word2.length()];
    }
};

// Runtime: 65 ms, faster than 16.32% of C++ online submissions for Delete Operation for Two Strings.
// Memory Usage: 12.3 MB, less than 34.50% of C++ online submissions for Delete Operation for Two Strings.

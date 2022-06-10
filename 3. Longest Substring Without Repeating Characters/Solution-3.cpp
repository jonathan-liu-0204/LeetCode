class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> chars(128);
        
        int left = 0;
        int right = 0;
        
        int ans = 0;
        
        while(right < s.length()){
            
            char r = s[right];
            chars[r]++;
            
            while(chars[r] > 1){
                char l = s[left];
                chars[l]--;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};

// Runtime: 7 ms, faster than 91.93% of C++ online submissions for Longest Substring Without Repeating Characters.
// Memory Usage: 7.6 MB, less than 85.76% of C++ online submissions for Longest Substring Without Repeating Characters.
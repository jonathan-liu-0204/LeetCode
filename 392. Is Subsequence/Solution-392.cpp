class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(s.length() == 0){
            return true;
        }
        
        int si = 0;
        int ti = 0;
        
        if(s.length() == 1 && t.length() == 1){
            if(s[0] == t[0]){
                return true;
            }
            else{
                return false;
            }
        }
        
        while(si < s.length() && ti < t.length()){
            if(s[si] == t[ti]){
                si++;
                ti++;
            }
            else{
                ti++;
            }
            
            if(si == s.length()){
                return true;
            }
        }
        
        return false;
    }
};

// Runtime: 2 ms, faster than 56.33% of C++ online submissions for Is Subsequence.
// Memory Usage: 6.4 MB, less than 71.72% of C++ online submissions for Is Subsequence.
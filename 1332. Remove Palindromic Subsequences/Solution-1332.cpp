class Solution {
public:
    int removePalindromeSub(string s){
        
        if(s.length() == 0){
            return 0;
        }
        
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        
        if(s == rev_s){
            return 1;
        }
        else{
            return 2;
        }
    }
};

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Palindromic Subsequences.
// Memory Usage: 6.2 MB, less than 78.83% of C++ online submissions for Remove Palindromic Subsequences.
class Solution {
public:
    bool validPalindrome(string s) {
        
        int left = 0;
        int right = s.length() - 1;
        
        while(left < right){
            if(s[left] != s[right]){
                return check(s, left+1, right) || check(s, left, right-1);
            }
            left++;
            right--;
        }   
        return true;
    }

private:
    bool check(string s, int i, int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

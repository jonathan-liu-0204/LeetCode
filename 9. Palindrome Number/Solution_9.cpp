class Solution {
public:

    bool isPalindrome(int x) {
        
        string x_string = to_string(x);

        for(int i = 0; i < x_string.size() / 2; i++){
            if(x_string[i] != x_string[x_string.size() - i - 1]){
                return false;
            }
        }

        return true;
    }
};
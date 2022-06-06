class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int current = 99;
        
        for(int i = 0; i < letters.size(); i++){
            
            int tmp = abs(letters[i] - target);
            int tmp2 = 26 - tmp;
                        
            if(tmp < tmp2){
                if(tmp < current && letters[i] > target){
                    return letters[i];
                }
            }
            else{
                if(tmp2 < current && letters[i] > target){
                    return letters[i];
                }
            }
        }
        
        return letters[0];
    }
};

// Runtime: 11 ms, faster than 96.86% of C++ online submissions for Find Smallest Letter Greater Than Target.
// Memory Usage: 16 MB, less than 25.78% of C++ online submissions for Find Smallest Letter Greater Than Target.
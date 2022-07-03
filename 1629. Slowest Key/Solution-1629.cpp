class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
                
        int longest = releaseTimes[0];
        char ans = keysPressed[0];
        
        for(int i = 1; i < releaseTimes.size(); i++){
            int time = releaseTimes[i] - releaseTimes[i-1];
            
            if(time > longest){
                longest = time;
                ans = keysPressed[i];
            }
            else if(time == longest){
                if(keysPressed[i] > ans){
                    ans = keysPressed[i];
                }
            }
        }
        return ans;
    }
};

// Runtime: 11 ms, faster than 70.72% of C++ online submissions for Slowest Key.
// Memory Usage: 10.8 MB, less than 56.61% of C++ online submissions for Slowest Key.
class Solution {
public:
    int mySqrt(int x) {
        
        unsigned long i = 0;
                
        while(i <= (x/2) + 1){
            
            
            if(i*i < x && (i+1)*(i+1) > x){
                return i;
            }
            else if(i*i < x){
                i++;
            }
            
            if(i*i == x){
                return i;
            }
        }
        return 0;
    }
};

// Runtime: 68 ms, faster than 5.31% of C++ online submissions for Sqrt(x).
// Memory Usage: 5.9 MB, less than 25.99% of C++ online submissions for Sqrt(x).
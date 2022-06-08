// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        unsigned long long left = 1;
        unsigned long long right = n;
        
        while(left < right){
            unsigned long long tmp = (left + right) / 2;
            
            if(isBadVersion(tmp)){
                right = tmp;
            }
            else{
                left = tmp + 1;
            }
            // cout << "left: " << left << "right: " << right << endl;
        }
        return left;
    }
};

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad Version.
// Memory Usage: 5.9 MB, less than 68.46% of C++ online submissions for First Bad Version.
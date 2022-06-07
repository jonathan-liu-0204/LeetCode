class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0; //pointer for nums1
        int j = 0; //pointer for nums2
        
        while(j < n){
            
            i = 0;
            
            while(i < m+n){
                if(i == m+j){
                    nums1.insert(nums1.begin() + i, nums2[j]);
                    nums1.pop_back();
                    break;
                }
                else if(nums2[j] <= nums1[i]){
                    nums1.insert(nums1.begin() + i, nums2[j]);
                    nums1.pop_back();
                    break;
                }
                i++;
            }
            
            j++;
        }
    }
};

// Runtime: 4 ms, faster than 49.07% of C++ online submissions for Merge Sorted Array.
// Memory Usage: 9.2 MB, less than 30.68% of C++ online submissions for Merge Sorted Array.
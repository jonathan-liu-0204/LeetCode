class Solution {
public:
    
    static bool sortcol(const vector<int>& v1, const vector<int>& v2){
            return v1[1] < v2[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), sortcol);
        
        int count = 0;
        int previous = -60000;
        
        for(int i = 0; i < intervals.size(); i++){
            if(intervals[i][0] >= previous){
                previous = intervals[i][1];
            }
            else{
                count++;
            }
            // cout << "i: " << i << "  " << intervals[i][0] << " " << intervals[i][1] << " previous: " << previous << " count: " << count << endl;
        }
        
        return count;
    }
};

// Runtime: 729 ms. Runtime beats 23.79 % of cpp submissions.
// Memory Usage: 89.9 MB. Memory usage beats 21.42 % of cpp submissions.

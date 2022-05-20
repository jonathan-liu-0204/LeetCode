class Solution {
public:
    
    // static bool sortlast(vector<int> v1, vector<int> v2){
    //     return v1[1] < v2[1];
    // }
    
    int findMinArrowShots(vector<vector<int>>& points){
        
        if(points.size() < 1){
            return 0;
        }
        
        sort(points.begin(), points.end(), [](const vector<int> &v1, const vector<int> &v2){
            return v1[1] < v2[1];
        });  
        
        int arrows = 1;
        int previous = points[0][1];
        
        for(int i = 1; i < points.size(); i++){
            if(points[i][0] > previous){
                previous = points[i][1];
                arrows++;
            }
        }
        return arrows;
    }
};

// Runtime: 620 ms, faster than 45.75% of C++ online submissions for Minimum Number of Arrows to Burst Balloons.
// Memory Usage: 89.8 MB, less than 28.21% of C++ online submissions for Minimum Number of Arrows to Burst Balloons.
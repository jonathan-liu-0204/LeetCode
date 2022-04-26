class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int ans = 0;
        int previous = 0;
        int a = 0;
        int b = 0;
        
        vector<vector<int>> save{};
        int x = 0;
        
        for(int i = 0; i < points.size(); i++){
            int min = 9999999;
            a = i;
            
            save[x][0] = i;
            
            for(int j = 0; j < points.size(); j++){
                
                if(i != j){
                    int tmp = 0;
                    tmp = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                    if(tmp < min){
                        min = tmp;
                        b = j;
                        save[x][1] = j;
                    }
                }
            }
            cout << "a: " << a << " b: " << b << " dis: " << min << endl;
            
            ans += min;
        }
        return ans;
    }
};
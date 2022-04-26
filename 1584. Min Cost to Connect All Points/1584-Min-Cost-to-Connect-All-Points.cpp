class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int ans = 0;
        int count = 0;
        int connect[1005][2];
        
        if(points.size() == 1){
            return 0;
        }
        
        //first connect point
        for(int a = 0; a < points.size(); a++){
            
            int min = 5000000;
            int final_choice = 0;
            
            //second connect point
            for(int b = 0; b < points.size(); b++){
                
                // if not itself
                if(b != a){
                    
                    int cal = abs(points[a][0] - points[b][0]) + abs(points[a][1] - points[b][1]);
                    
                    if(cal < min){
                        min = cal;
                        final_choice = b;
                    }
                }
            }
            
            // only add to answer if not connected before
            
            bool check = false;
            
            for(int i = 0; i < count + 1; i++){
                if(connect[i][0] == final_choice && connect[i][1] == a){
                    check = true;
                }
            }
            if(check == false){
                ans += min;
                connect[count][0] = a;
                connect[count][1] = final_choice;
                count ++;
            }
            
            cout << "count: " << count << endl;
            for(int i = 0; i < count + 1; i++){
                cout << connect[i][0] << " " << connect[i][1] << endl;
            }
            cout << "current ans: " << ans << endl;
        }
        return ans;
    }
};
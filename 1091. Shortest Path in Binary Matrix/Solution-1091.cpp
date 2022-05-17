class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int direction[8][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}, {-1,-1}, {1,-1}, {-1,1}, {1,1}};
        
        queue<int> q;
        
        int grid_size = grid.size();
        
        vector<int> minLen(grid_size * grid_size, 1e6);
        vector<int> visited(grid_size * grid_size);
        
        if(grid[0][0] == 0){
            q.push(0);
        }
        
        minLen[0] = 1;
        visited[0] = 1;
        
        while(!q.empty()){
            
            int current = q.front();
            q.pop();
            
            int current_row = current / grid_size;
            int current_col = current % grid_size;
            
            for(int i = 0; i < 8; i++){
                
                int x = current_row + direction[i][0];
                int y = current_col + direction[i][1];
                
                int tmp = x * grid_size + y;
                
                if(x >= 0 && x < grid_size && y >= 0 && y < grid_size && (visited[tmp] == 0) && (grid[x][y] == 0)){
                    q.push(tmp);
                    visited[tmp] = 1;
                    minLen[tmp] = min(minLen[tmp], minLen[current]+1);
                }
            }
        }
        
        if(minLen[grid_size * grid_size - 1] == 1e6){
           return -1;
        }
       else{
           return minLen[grid_size * grid_size - 1];
       }
   }
};

//
// Reference
// https://www.twblogs.net/a/5d5eddefbd9eee5327fdcfea
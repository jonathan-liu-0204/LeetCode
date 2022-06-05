void dfs(int i, vector<int> &row, vector<bool> &col, vector<bool>& main, vector<bool> &anti, int &count) {
        if (i == row.size()) {
            count++;
            return;
        }
       for (int j = 0; j < col.size(); j++) {
         if(col[j] && main[i+j] && anti[i+col.size()-1-j]){
             row[i] = j; 
             col[j] = main[i+j] = anti[i+col.size()-1-j] = false;
             dfs(i+1, row, col, main, anti, count);
             col[j] = main[i+j] = anti[i+col.size()-1-j] = true;
      }
    }
}

int totalNQueens(int n) {
    
    vector<bool> col(n, true);
    vector<bool> anti(2*n-1, true);
    vector<bool> main(2*n-1, true);
    vector<int> row(n, 0);
    
    int count = 0;
    dfs(0, row, col, main, anti, count);
    
    return count;
}


class Solution {
public:

    vector<vector<string>> ret;
    
    bool is_valid(vector<string> &board, int row, int col){
        
        // check col
        for(int i = row; i >= 0; --i){
            if(board[i][col] == 'Q'){
                return false;
            }
        }
        
        // check left diagonal
        for(int i = row, j = col; i >= 0 && j >= 0; --i, --j){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        
        //check right diagonal
        for(int i=row,j=col;i>=0&&j<board.size();--i,++j){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        
        return true;
    }
    
    void dfs(vector<string> &board, int row){
        // exit condition
        if(row == board.size()){
            ret.push_back(board);
            return;
        }
        
        // iterate every possible position
        for(int i = 0; i < board.size(); ++i){
            if(is_valid(board, row, i)){
                // make decision
                board[row][i] = 'Q';
                // next iteration
                dfs(board, row+1);
                // back-tracking
                board[row][i] = '.';
            }
        }
    }
    
    int totalNQueens(int n) {
		// return empty if n <= 0
        if(n <= 0){
            return {{}};
        }
        
        vector<string> board(n,string(n,'.'));
        dfs(board,0);
        return ret.size();
    }
};


// Runtime: 6 ms, faster than 64.32% of C++ online submissions for N-Queens II.
// Memory Usage: 6.7 MB, less than 34.70% of C++ online submissions for N-Queens II.
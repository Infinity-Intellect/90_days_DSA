class Solution {
public:
  
    bool isSafe(int row, int col, vector<string> board, int n) {
      int duplicateRow = row;
      int duplicateCol = col;
        
      while(col >=0 && row>=0) {
        if(board[row][col] == 'Q') {
          return false;
        }
        --row;--col;
      }
      
      row = duplicateRow;
      col = duplicateCol;
      
      while(col >= 0) {
        if(board[row][col] == 'Q') {
          return false;
        }
        --col;
      }
      
      col = duplicateCol;
      
      while(row < n && col >= 0) {
        if(board[row][col] == 'Q') {
          return false;
        }
        ++row;--col;
      }
      return true;
    }
  
    void solve(int col, vector<string>& board,
                                vector<vector<string>>& results,
                                int n) {
      
      if(col == n) {
        results.push_back(board);
      }
      else {
        for(int row = 0; row < n; row++) {
          if(isSafe(row, col, board, n)) {
            board[row][col]='Q';
            solve(col+1, board, results, n);
            board[row][col]='.';
          }
        }
      }
      
      
    }
  
    vector<vector<string>> solveNQueens(int n) {
      vector<vector<string>> results;
      string s(n, '.');
      vector<string> board(n, s);
      solve(0, board, results, n);
      
      return results;
    }
};

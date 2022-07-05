class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int m = matrix.size();
      int n = matrix[0].size();

      
      set<int> rowSet;
      set<int> colSet;
      
      for(int i=0; i<m;i++) {
        for(int j=0;j<n;j++) {
          if(matrix[i][j] == 0) {
            rowSet.insert(i);
            colSet.insert(j);
          }
        }
      }
      
      for(int i=0; i<m;i++) {
        for(int j=0;j<n;j++) {
          if(rowSet.find(i)!=rowSet.end() ||
            colSet.find(j)!=colSet.end()) {
            matrix[i][j] = 0;
          }
        }
      }
    }
};

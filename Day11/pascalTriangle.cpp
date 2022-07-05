class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> result;
      
      result.push_back(vector<int>(1,1));
      
      if(numRows == 1) {
        return result;
      }
      
      result.push_back(vector<int>(2,1));
      
      if(numRows == 2) {
        return result;
      }
      
      for(int i=2;i<numRows;i++) {
        vector<int> currentRow(1,1);
        for(int j=1;j<i;j++) {
          currentRow.push_back(result[i-1][j-1]+result[i-1][j]);
        }
        currentRow.push_back(1);
        result.push_back(currentRow);
      }
      return result;
      
    }
};

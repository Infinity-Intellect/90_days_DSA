class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m = matrix.size(), n = matrix[0].size();
      for(int i=0;i<m;i++) {
        int l = 0, r = n-1, mid = l + (r-l)/2;
        
        while(l<=r) {
          if(matrix[i][mid] == target) {
            return true;
          }
          if(target < matrix[i][mid]) {
            r = mid-1;
          }
          else if(target > matrix[i][mid]) {
            l = mid+1;
          }
          mid = l+(r-l)/2;
        }
      }
      return false;
    }
};

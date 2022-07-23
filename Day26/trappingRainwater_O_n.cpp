class Solution {
public:
    int trap(vector<int>& height) {
      int n = height.size();
      int result  = 0;
      vector<int> leftMax(n, 0);
      vector<int> rightMax(n, 0);
      
      
      for(int i=1;i<n;i++) {
        leftMax[i] = max(max(height[i], leftMax[i-1]), height[i-1]);
      }
      
      for(int i=n-2;i>=0;i--) {
        rightMax[i] = max(max(height[i], rightMax[i+1]), height[i+1]);
      }
      
      for(int i=0;i<n;i++) {
        cout<<max(0, min(leftMax[i], rightMax[i])-height[i])<<" ";
        result += max(0, min(leftMax[i], rightMax[i])-height[i]);
      }
      
      return result;
    }
};

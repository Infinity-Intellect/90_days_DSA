class Solution {
public:
    int trap(vector<int>& height) {
      int n = height.size();
      int result = 0;
      
      for(int i=0;i<n;i++) {
        int leftMax = 0, rightMax = 0;
        
        int curr = i;
        
        while(curr>=0) {
          leftMax = max(leftMax, height[curr]);
          --curr;
        }
        
        curr = i;
        
        while(curr<n) {
          rightMax = max(rightMax, height[curr]);
          ++curr;
        }
        
        int ans = min(leftMax, rightMax) - height[i];
        
        if(ans > 0) {
          result+=ans;
        }
        
        
      }
      return result;
    }
};

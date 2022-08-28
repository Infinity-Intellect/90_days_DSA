class Solution {
public:
  
    int largestRectangleArea(vector<int>& heights) {
      stack<int> st;
      vector<int> leftArr;
      vector<int> rightArr(heights.size());
      
      for(int i=0;i<heights.size();i++) {
        while(!st.empty() && heights[st.top()] >= heights[i]) {
          st.pop();
        }
        
        if(st.empty()) {
          leftArr.push_back(0);
        }
        else {
          leftArr.push_back(st.top()+1);
        }
        
        st.push(i);
      }
      while(!st.empty()) {
        st.pop();
      }
      for(int i=heights.size()-1;i>=0;i--) {
        while(!st.empty() && heights[st.top()] >= heights[i]) {
          st.pop();
        }
        
        if(st.empty()) {
          rightArr[i] = heights.size()-1;
        }
        else {
          rightArr[i] = st.top()-1;
        }
        
        st.push(i);
      }
      
      int maxArea = INT_MIN;
      
      for(int i=0;i<heights.size();i++) {
        int area = (rightArr[i]-leftArr[i]+1)*heights[i];
        
        maxArea = max(area, maxArea);
      }
      
      return maxArea;
    }
};

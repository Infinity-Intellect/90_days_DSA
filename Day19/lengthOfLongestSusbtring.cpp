class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      set<int> st;
      int maxLength = 0;
      
      int l = 0, r = 0;
      
      while(r<s.length()) {
        if(st.find(s[r]) != st.end()) {
          while(l<r && st.find(s[r])!=st.end()) {
            st.erase(s[l]);
            ++l;
          }
        }
        st.insert(s[r]);
        maxLength = max(maxLength, r-l+1);
        ++r;
      }
      
      return maxLength;
    }
};

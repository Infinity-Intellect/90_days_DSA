class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
      map<char, char> bracketMap;
      bracketMap = {{')', '(' }, {']', '['}, {'}', '{'}};
      
      for(char c: s) {
        if(!st.empty() && bracketMap[c] == st.top()) {
          st.pop();
        }
        else {
          st.push(c);
        }
        
      }
      
      return st.empty();
    }
};

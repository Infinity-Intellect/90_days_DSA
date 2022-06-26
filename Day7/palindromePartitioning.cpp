class Solution {
public:
    vector<vector<string>> partition(string s) {
      vector<vector<string>> result;
      vector<string> currentSubstr;
      recurse(0, s, currentSubstr, result);
      return result;
    }
  
    void recurse(int index, string s, vector<string> currentSubstr,
                vector<vector<string>>& results) {
      if(index == s.length()) {
        results.push_back(currentSubstr);
      }
      else {
        for(int i=index;i<s.length();i++) {
          if(isPalindrome(s, index, i)) {
            currentSubstr.push_back(s.substr(index, i-index+1));
            recurse(i+1, s, currentSubstr, results);
            currentSubstr.pop_back();
          }
        }
      }
    }
  
    bool isPalindrome(string s, int start, int end) {
      while(start <= end) {
        if(s[start++] != s[end--]) {
          return false;
        }
      }
      return true;
    }
};

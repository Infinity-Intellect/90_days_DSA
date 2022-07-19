class Solution {
public:
    bool isPalindrome(string s) {
      string reconstructedString = "";
      
      for(char ch: s) {
        if(ch!=' ' && isalnum(ch)) {
          reconstructedString+=(char) tolower(ch);
        }
      }
      
      int i=0, j=reconstructedString.length()-1;
      
      while(i<=j) {
        if(reconstructedString[i]!=reconstructedString[j]) {
          return false;
        }
        
        ++i;--j;
      }
      
      return true;
    }
};

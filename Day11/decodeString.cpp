class Solution {
public:
    string decodeString(string s) {
      stack<char> charStack;
      
      for(int i=0;i<s.length();i++) {
        if(s[i] != ']') {
          charStack.push(s[i]);
        }
        else {
          string subString = "";
          
          while(charStack.top()!='[') {
            subString = charStack.top() + subString;
            charStack.pop();
          }
          charStack.pop();
          
          string theNumber = "";
          while(!charStack.empty() && 
                charStack.top() >= '0' && 
                charStack.top()<= '9') {
            theNumber = charStack.top()+theNumber;
            charStack.pop();
          }
          
          long long int num = stoll(theNumber);
          
          while(num--) {
            for(int k=0;k<subString.length();k++) {
              charStack.push(subString[k]);
            }
          }
        }
      }
      
      string result = "";
      
      while(!charStack.empty()) {
        result = charStack.top() + result;
        charStack.pop();
      }
      return result;
    }
};

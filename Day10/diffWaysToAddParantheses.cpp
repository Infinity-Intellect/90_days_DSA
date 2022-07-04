class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
      vector<int> ans;
      
      for(int i=0;i<expression.size();i++) {
        if(isOperator(expression[i])) {
          vector<int> left = diffWaysToCompute(expression.substr(0, i));
          vector<int> right = diffWaysToCompute(expression.substr(i+1));
          
          for(auto x: left) {
            for(auto y: right) {
              ans.push_back(operate(x, y, expression[i]));
            }
          }
        }
      }
      
      if(ans.size() == 0) {
        ans.push_back(stoll(expression));
      }
      
      return ans;
    }
  
    int operate(int num1, int num2, char operator_) {
      switch(operator_) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        default: return num1;
      }
    }
  
    bool isOperator(char ch) {
      return ch=='*' || ch=='-' || ch=='+';
    }
};

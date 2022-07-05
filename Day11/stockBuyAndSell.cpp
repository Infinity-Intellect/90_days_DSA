class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
      int maxDiff = 0;
      int min = prices[0], max = prices[0];
      
      for(int i=1;i<prices.size();i++) {
        if(prices[i] > max) {
          max = prices[i];
        }
        
        if(prices[i] < min) {
          min = prices[i];
          max = prices[i];
        }
        
        if(max - min > maxDiff) {
          maxDiff = max-min;
        }
      }
      
      return maxDiff;
    }
};

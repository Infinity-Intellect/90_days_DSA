class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int maxCount = 0;
      int count = 0;
      
      for(int num: nums) {
        if(num == 1) {
          count+=1;
        }
        else {
          maxCount = max(count, maxCount);
          count = 0;
        }
      }
      
      return max(maxCount, count);
      
    }
};

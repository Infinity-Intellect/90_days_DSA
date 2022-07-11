class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      set<int> hashSet;
      int longestStreak = 0;
      
      for(int num: nums) {
        hashSet.insert(num);
      }
      
      for(int num: nums) {
        if(!hashSet.count(num-1)) {
          int currentStreak = 0;
          int currentNum = num;
          
          while(hashSet.count(currentNum)) {
            currentNum+=1;
            currentStreak+=1;
          }
          
          longestStreak = max(longestStreak, currentStreak);
        }
      }
      
      return longestStreak;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int nTimes = nums.size()/2;
      int ans = 0;
      
      map<int, int> m;
      
      for(int i=0;i<nums.size();i++) {
        if(m.find(nums[i]) == m.end()) {
          m[nums[i]] = 1;
        }
        else {
          m[nums[i]]+=1;
        }
      }
      
      for(auto i:m) {
        if(i.second > nTimes) {
          ans = i.first;
          break;
        }
      }
      
      return ans;
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
      map<int, int> m = {{0,0}, {1,0}, {2,0}};
      
      
      for(int i=0;i<nums.size();i++) {
        m[nums[i]]+=1;
      }
      
      int zeroCount = m[0], oneCount = m[1], twoCount = m[2];
      
      int j = 0;
      
      while(j<zeroCount) {
        nums[j++]=0;
      }
      
      while(j<zeroCount+oneCount) {
        nums[j++]=1;
      }
      
      while(j<zeroCount+oneCount+twoCount) {
        nums[j++] = 2;
      }
      
      
    }
};

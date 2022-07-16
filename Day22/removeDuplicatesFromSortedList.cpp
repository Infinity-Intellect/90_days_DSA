class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int pos = 0;
      
      if(nums.size() <= 1) {
        return nums.size();
      }
      
      for(int i=pos+1;i<nums.size();i++) {
        if(nums[i]!=nums[pos]) {
          pos+=1;
          nums[pos]=nums[i];
        }
      }
      
      return pos+1;
    }
};

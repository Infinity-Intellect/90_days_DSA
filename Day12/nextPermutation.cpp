class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int indexOfFirstShift;
      
      int i = nums.size() - 2, j = nums.size() - 1;
      
      while(i>=0 && nums[i]>=nums[i+1]) {
        --i;
      }
      
      if(i>=0) {        
        while(nums[i]>=nums[j]) {
          --j;
        }
        
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
      }
      
      
      
      reverse(nums.begin()+i+1, nums.end());
    }
};

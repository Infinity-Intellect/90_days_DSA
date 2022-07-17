class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> result;
      sort(nums.begin(), nums.end());
      int n = nums.size();
      for(int i=0;i<n-2;i++) {
        if(i==0 || nums[i]!=nums[i-1]) {
          int begin = i+1, end = n-1;
          
          while(begin < end) {
            if(nums[begin]+nums[end] == -nums[i]) {
              vector<int> temp{nums[i], nums[begin], nums[end]};
              
              result.push_back(temp);
              
              while(begin<end && nums[begin]==nums[begin+1])begin++;
              while(begin<end && nums[end]==nums[end-1]) end--;
              
              begin++;
              end--;
            }
            else if(nums[begin]+nums[end]<(-nums[i])) begin++;
            else end--;
          }
        }
      }
      return result;
    }
};

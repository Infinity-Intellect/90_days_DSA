class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long int target) {
      int n = nums.size();
      vector<vector<int>> result;
      
      sort(nums.begin(), nums.end());
      
      if(n == 0) {
        return result;
      }
      
      for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
          long long int secondaryTarget = target - (nums[i] + nums[j]);
          
          int begin = j+1, end = n-1;
          
          while(begin < end) {
            if((nums[begin] + nums[end]) < secondaryTarget) {
              begin++;
            }
            else if((nums[begin] + nums[end]) > secondaryTarget) {
              end--;
            }
            else {
              vector<int> tempResult{nums[i], nums[j], nums[begin], nums[end]};
              
              result.push_back(tempResult);
              
              while(begin<end && nums[begin] == tempResult[2]) {
                ++begin;
              }
              
              while(begin<end && nums[end] == tempResult[3]) {
                --end;
              }
            }
          }
          
          while(j+1<n && nums[j+1]==nums[j]) ++j;
        }
        while(i+1<n && nums[i+1]==nums[i]) ++i;
        
      }
      
      return result;
    }
};

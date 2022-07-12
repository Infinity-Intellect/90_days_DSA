class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int n = nums.size();
      vector<vector<int>> ans;
      set<multiset<int>> s;
      for(int i=0;i<n-3;i++) {
        for(int j=i+1;j<n-2;j++) {
          for(int k=j+1;k<n-1;k++) {
            for(int l=k+1;l<n;l++) {
              if(nums[i]+nums[j]+nums[k]+nums[l] == target) {
                s.insert(multiset<int>{nums[i], nums[j], nums[k], nums[l]});
              }
            }
          }
        }
      }
      
      for(auto x: s) {
        ans.push_back(vector<int>(x.begin(), x.end()));
      }
      
      return ans;
    }
};

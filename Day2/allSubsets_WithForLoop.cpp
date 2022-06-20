class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<int> currentSubset;
      vector<vector<int>> results;
      generateSubsets(0, results, nums, currentSubset);
      return results;
    }
  
    void generateSubsets(int index, vector<vector<int>>& results,
                        vector<int> nums, vector<int> currentSubset) {
      results.push_back(currentSubset);
      
      for(int i = index;i<nums.size(); i++) {
        currentSubset.push_back(nums[i]);
        generateSubsets(i+1, results, nums, currentSubset);
        currentSubset.pop_back();
      }
    }
};

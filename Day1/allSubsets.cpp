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
      if(index >= nums.size()) {
        results.push_back(currentSubset);
      }
      else {
        currentSubset.push_back(nums[index]);
        generateSubsets(index+1, results, nums, currentSubset);
        currentSubset.pop_back();
        generateSubsets(index+1, results, nums, currentSubset);
      }
    }
};

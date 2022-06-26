class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> results;
      vector<bool> frequency(nums.size(), false);
      vector<int> currentSubset;
      recurse(nums, currentSubset, frequency, results);
      return results;
    }
  
    void recurse(vector<int>& nums, vector<int> currentSubset,
                vector<bool> frequency, vector<vector<int>>& results) {
      if(currentSubset.size() == nums.size()) {
        results.push_back(currentSubset);
      }
      else {
        for(int i = 0;i < nums.size(); i++) {
          if(!frequency[i]) {
            frequency[i] = true;
            currentSubset.push_back(nums[i]);
            recurse(nums, currentSubset, frequency, results);
            currentSubset.pop_back();
            frequency[i] = false;            
          }
        }
      }
    }
  
    
};

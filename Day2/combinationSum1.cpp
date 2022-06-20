class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> results;
      vector<int> currentSubset;
      
      generateSubset(0, results, currentSubset, candidates, target);
      
      return results;
    }
  
    void generateSubset(int index, vector<vector<int>>& results,
                       vector<int> currentSubset, vector<int> candidates,
                       int target) {
      int sum = accumulate(currentSubset.begin(), currentSubset.end(), 0);
      if(sum == target) {
        results.push_back(currentSubset);
      }
      else if(sum < target) {
        for(int i = index; i < candidates.size(); i++) {
          currentSubset.push_back(candidates[i]);
          generateSubset(i, results, currentSubset, candidates, target);
          currentSubset.pop_back();
        }
      }
    }
};

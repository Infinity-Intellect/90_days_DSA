class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<vector<int> > results;
      vector<int> currentSubset;
      
      sort(candidates.begin(), candidates.end());
      
      generateCombinations(0, results, candidates, currentSubset, target);
      
      return results;
    }
  
    void generateCombinations(int index, vector<vector<int>>& results,
                             vector<int> candidates, vector<int> currentSubset,
                             int target) {
      int sum = accumulate(currentSubset.begin(), currentSubset.end(), 0);
      
      if(sum == target) {
        results.push_back(currentSubset);
      }
      else if(sum < target) {
        for(int i = index; i < candidates.size(); i++) {
          
          if(i > index && candidates[i-1] == candidates[i]) {
             continue;
          }
          currentSubset.push_back(candidates[i]);
          generateCombinations(i+1, results, candidates, currentSubset, target);
          currentSubset.pop_back();
        }
      }
    }
};

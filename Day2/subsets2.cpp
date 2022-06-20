#include<bits/stdc++.h>
void generateSubsets(int index, vector<vector<int>>& results,
                    vector<int> nums, vector<int> currentSubset) {
    results.push_back(currentSubset);
    
    for(int i = index; i < nums.size(); i++) {
        if(i > index && nums[i-1] == nums[i]) {
            continue;
        }
        currentSubset.push_back(nums[i]);
        generateSubsets(i+1, results, nums, currentSubset);
        currentSubset.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> results;
    vector<int> currentSubset;
    sort(arr.begin(), arr.end());
    generateSubsets(0, results, arr, currentSubset);
    
    return results;
}

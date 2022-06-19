void generateSubsets(int index, vector<int>& num, vector<int>& subsetSums,
                  vector<int> currentSubset) {
    if(index >= num.size()) {
        int sum = 0;
        for(int i=0;i<currentSubset.size();i++) {
            sum+=currentSubset[i];
        }
        subsetSums.push_back(sum);
    }
    else {
        currentSubset.push_back(num[index]);
        generateSubsets(index+1, num, subsetSums, currentSubset);
        currentSubset.pop_back();
        generateSubsets(index+1, num, subsetSums, currentSubset);
    }
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> subsetSums;
    vector<int> currentSubset;
    // Write your code here.
    generateSubsets(0, num, subsetSums, currentSubset);
    sort(subsetSums.begin(), subsetSums.end());
    return subsetSums;
}

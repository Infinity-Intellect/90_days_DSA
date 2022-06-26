class Solution {
public:
    int nthSeq = 0;
    string getPermutation(int n, int k) {
      vector<int> nums(n);
      iota(nums.begin(), nums.end(), 1);
      vector<bool> freq(n, false);
      vector<int> currentPerm;
      vector<int> result;
      recurse(nums, currentPerm, k, freq, result);
      
      stringstream streamS;
      copy(result.begin(), result.end(), ostream_iterator<int>(streamS, ""));
      
      string ans = streamS.str();
      return ans;
    }
  
    void recurse(vector<int> nums, vector<int> currentPerm, int k,
                vector<bool> freq, vector<int>& result) {
      if(currentPerm.size() == nums.size()) {
        ++nthSeq;
        if(nthSeq == k) {
          result = currentPerm;
        }
        
      } 
      else if(nthSeq < k) {
        for(int i=0;i<nums.size(); i++) {
          if(!freq[i]) {
            freq[i] = true;
            currentPerm.push_back(nums[i]);
            recurse(nums, currentPerm, k, freq, result);
            currentPerm.pop_back();
            freq[i]=false;
          }
        }
      }
    }
};

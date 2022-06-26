class Solution {
public:
    int nthSeq = 0;
    string getPermutation(int n, int k) {
      return getPermutationUtil(n, k);
    }
  
    string getPermutationUtil(int n, int k) {
      int fact = 1;
      string ans = "";
      vector<int> numbers(n);
      iota(numbers.begin(), numbers.end(), 1);
      for(int i=1;i<n;i++) {
        fact*=i;
      }
      
      k = k -1;
      
      while(true) {
        ans = ans + to_string(numbers[k / fact]);
        numbers.erase(numbers.begin() + (k/fact));
        
        if(numbers.size() == 0) {
          break;
        }
        
        k = k % fact;
        fact = fact/numbers.size();
        
      }
      return ans;
      
    }
};

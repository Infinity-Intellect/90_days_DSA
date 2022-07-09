class Solution {
public:
    int majorityElement(vector<int>& nums) {
     //Boyer Moore
      int count = 0;
      int candidateEltForMajority = 0;
      
      for(int n:nums) {
        if(count == 0) {
          candidateEltForMajority = n;
        }
        count+=(n==candidateEltForMajority?1:-1);
      }
      return candidateEltForMajority;
    }
};

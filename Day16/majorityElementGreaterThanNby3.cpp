class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      //Extended Boyer Moore's Voting Algo
      
      int nTimes = nums.size()/3;
      vector<int> ans;
      
      int element1 = -1, count1 = 0, element2 = -1, count2 = 0;
      
      for(int num: nums) {
        if(num == element1) {
          count1++;
        }
        else if(num == element2) {
          count2++;
        }
        else if(count1 == 0) {
          element1 = num;
          count1++;
        }
        else if(count2==0) {
          element2 = num;
          count2++;
        }
        else {
          count1--;
          count2--;
        }
      }
      
      count1 = 0; count2 = 0;
      
      for(int num: nums) {
        if(num == element1) {
          count1++;
        }
        else if(num == element2) {
          count2++;
        }
      }
      
      if(count1 > nTimes) {
        ans.push_back(element1);
      }
      if(count2 > nTimes) {
        ans.push_back(element2);
      }
      
      return ans;
    }
};

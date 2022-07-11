class Solution {
public:
    int reversePairs(vector<int>& nums) {
      int count = 0;
      mergeSort(nums, 0, nums.size()-1, count);
      for(int num: nums) {
        cout<<num<<" ";
      }
      cout<<endl;
      return count;
    }
  
    void merge(int begin, int mid, int end, vector<int>&nums, int& count) {

      vector<int> leftArray;
      vector<int> rightArray;
      int l = mid+1;
      for(int i=begin;i<=mid;i++){
        
        while(l<=end && nums[i] > 2LL*nums[l]) {
          l++;
        }
        count+=(l-(mid+1));
      }
      
      for(int i=begin;i<mid+1;i++) {
        leftArray.push_back(nums[i]);
      }
      for(int i=mid+1;i<=end;i++) {
        rightArray.push_back(nums[i]);
      }
      
      int i=0, j=0, k=begin;
      
      while(i<leftArray.size() && j<rightArray.size()) {
        if(leftArray[i] < rightArray[j]) {
          nums[k++] = leftArray[i++];
        }
        else {
          nums[k++] = rightArray[j++];
        }
      }
      
      while(i<leftArray.size()) {
        nums[k++] = leftArray[i++];
      }
      while(j<rightArray.size()) {
        nums[k++] = rightArray[j++];
      }
    }
  
  
    void mergeSort(vector<int>& nums, int begin, int end, int& count) {
      if(begin < end) {
        int mid = begin + (end-begin)/2;
        mergeSort(nums, begin, mid, count);
        mergeSort(nums, mid+1, end, count);
        merge(begin, mid, end, nums, count);
      }
    }
};

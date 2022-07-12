#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int maxLength = 0;
    int n = arr.size();
    map<int,int> m;
    
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum+=arr[i];
        if(sum==0) {
            maxLength = max(maxLength, i+1);
        }
        else {
            if(m.find(sum)==m.end()) {
                m[sum]=i;
            }
            else {
                maxLength = max(maxLength, i-m[sum]);
            }
        }
    }
    return maxLength;
    

}

#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int, int> result;
    int actualSum = 0;
    
    sort(arr.begin(), arr.end());
    
    for(int i=1;i<arr.size();i++) {
        if(arr[i] == arr[i-1]) {
            result.second = arr[i];
        }
        actualSum+=arr[i];
    }
    actualSum+=arr[0];
    
    int expectedSum = (n*(n+1))/2;
    actualSum = actualSum - result.second;
    
    result.first = expectedSum - actualSum;
    
    return result;
}

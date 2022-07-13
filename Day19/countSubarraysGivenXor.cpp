#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n = arr.size();
    int count = 0;
    map<int, int> m;
    int xorSum = 0;
    
    for(int num: arr) {
        xorSum^=num;
        
        if(xorSum == x) {
            ++count;
        }
        
        if(m.find(xorSum^x) != m.end()) {
            count+=m[xorSum^x];
        }
        
        m[xorSum]+=1;
    }
    return count;
}

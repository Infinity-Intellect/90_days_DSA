#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);
    
    vector<int> result(arr.size(), -1);
    
    for(int i=arr.size()-1; i>=0; i--) {
        while(st.top() >= arr[i]) st.pop();
        
        result[i] = st.top();
        st.push(arr[i]);
            
    }
    return result;
}

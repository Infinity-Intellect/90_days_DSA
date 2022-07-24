void insert(stack<int>& st, int temp) {
    if(st.empty() || st.top() <= temp) {
        st.push(temp);
        return;
    }
    
    int t = st.top();
    st.pop();
    
    insert(st, temp);
    st.push(t);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
    if(stack.empty()) {
        return;
    }
    
    int temp = stack.top();
    stack.pop();
    sortStack(stack);
    
    insert(stack, temp);
}

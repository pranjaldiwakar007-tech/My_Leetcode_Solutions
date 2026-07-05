class MinStack {
public:
        long long mini=1e9,item;
        stack<long long> st;
        MinStack() {
        }
    void push(long long val) {
        if(st.empty()) { 
        mini=val;
        st.push(val);
        }
        else {
            if(val>mini) st.push(val);
        else{
            st.push(val+val-mini);
            mini=val;
        }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long item=st.top();
        st.pop();
        if(item<mini) mini=(2*mini)-item;
    }
    
    int top() {
        if(st.empty()) return 1e9;
        long long item=st.top();
        if(mini<item) return item;
        return mini; 
    }
    
    int getMin() {
    return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
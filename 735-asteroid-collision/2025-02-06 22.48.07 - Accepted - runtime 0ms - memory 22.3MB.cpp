class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        for(int i=0;i<a.size();i++){
            if(a[i]>0) st.push(a[i]);
            else {
            while(!st.empty()&&abs(a[i])>st.top()&&st.top()>0) st.pop();
                if(!st.empty()&&st.top()==abs(a[i])) st.pop();
                else if(st.empty()||st.top()<0)
                    st.push(a[i]);
                }
        }
        int i=st.size()-1;
        vector<int> res(st.size());
        while(!st.empty()){
            res[i--]=st.top();
            st.pop();
        }
        return res;
    }
};
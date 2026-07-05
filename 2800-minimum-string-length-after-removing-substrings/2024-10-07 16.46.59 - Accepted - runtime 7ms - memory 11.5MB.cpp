class Solution {
public:
    int minLength(string s) {
    stack<char> st;
    for (char x : s) {
        if (x == 'B' && !st.empty() && st.top() == 'A') {
            st.pop();
        } else if (x == 'D' && !st.empty() && st.top() == 'C') {
            st.pop();
        } else {
            st.push(x);
        }
    }
    return st.size();
}
};
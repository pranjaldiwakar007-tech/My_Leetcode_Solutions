class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        char c;
        for(int i=0;i<s.size();i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                st.push(s[i]);
            }
            else{
                c=st.top();
                if(st.empty()) return false;
                else{
                    if(c=='['&& s[i]==']'|| c=='{'&& s[i]=='}'||c=='('&& s[i]==')')
                    st.pop();
                    else return false;
                }
                // if() {st.pop();}
                // else if() {st.pop();}
                // else if() {st.pop();}
                // else return false;
             }
        }
        if(st.empty()) return true;
        return false;
    }
};
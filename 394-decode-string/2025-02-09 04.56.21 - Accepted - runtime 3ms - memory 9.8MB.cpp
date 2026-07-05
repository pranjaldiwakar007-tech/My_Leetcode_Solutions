class Solution {
public:
    string decodeString(string s) {
         stack<string> st;
         for(int i=0;i<s.size();i++){
              if(s[i]==']'){
                  string res="";
                 while(st.top()!="["){
                   res=st.top()+res;
                       st.pop();
                 }
                 st.pop();
                 string nnn="";
                 while(!st.empty()&&isdigit(st.top()[0])){
                    nnn=st.top()+nnn;
                   st.pop();
                 }
                int x=stoi(nnn);
                 string c="";
                 while(x--) c=res+c;
                 st.push(c);
            }
            else {
                st.push(string(1,s[i]));
            }
         }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};
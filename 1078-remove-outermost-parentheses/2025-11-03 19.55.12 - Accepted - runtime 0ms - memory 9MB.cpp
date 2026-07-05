class Solution {
public:
    string removeOuterParentheses(string s) {
        int bal=0;
        int n=s.size();
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(bal>0)res+=s[i];
            bal++;
            }
            else{
                bal--;
                 if(bal>0) res+=s[i];
            }
        }
        return res;
    }
};
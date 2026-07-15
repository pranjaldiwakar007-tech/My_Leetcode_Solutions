class Solution {
public:
    void solve(vector<string>&ans,int l,int r,int n,string &temp){
        if(l==n && r==n){
            ans.push_back(temp);
            return;
        }
        if(l<n){
            temp+='(';
            solve(ans,l+1,r,n,temp);
            temp.pop_back();
        }
        if(r<l){
            temp+=')';
            solve(ans,l,r+1,n,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp="";
        solve(ans,0,0,n,temp);
        return ans;
    }
};
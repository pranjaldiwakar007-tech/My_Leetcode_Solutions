class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                if(s[i]==s[i+2]) continue;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};
class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>idx(26),seen(26,0);
        string ans="";
        for(int i=0;i<s.size();i++) idx[s[i]-'a']=i;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(seen[ch-'a']) continue;
            while(ans.length() && ans.back()>ch && 
            idx[ans.back()-'a']>i){
                seen[ans.back()-'a']=0;
                ans.pop_back();
            }
            ans.push_back(ch);
            seen[ch-'a']=1;
        }
        return ans;
    }
};
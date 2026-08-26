class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0,r=0;
        int cnt=0;
        // vector<string> ans;
        string ans="";
        int mini=s.size()+1;
        for(;r<s.size();r++){
            if(s[r]=='1') cnt++;
            while(cnt>k){
                if(s[l]=='1') cnt--;
                l++;
            }
            while(cnt==k && s[l]=='0'){
                l++;
            }
            if(cnt==k){
            // mini=min(mini,r-l+1);
            string temp=s.substr(l,r-l+1);
            // if(ans.empty()) ans.push_back(temp);
            // if(!ans.empty() && ans.back()>temp){
            //     ans.pop_back();
            //     ans.push_back(temp);
            if(r-l+1<mini){
                mini=r-l+1;
                ans=temp;
            }
            else if(r-l+1==mini && temp<ans){
                ans=temp;
                }
            }
        }
        return ans;;
    }
};
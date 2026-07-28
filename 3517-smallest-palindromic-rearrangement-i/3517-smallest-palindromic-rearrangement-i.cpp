class Solution {
public:
    // bool ispalindrome(string &s){
    //     int n=s.size(),cnt=0;
    //     for(int i=0;i<=s.size()/2;i++){
    //         if(s[i]!=s[n-1-i]) return false;
    //         else cnt++;
    //     }
    //     if(cnt==n/2) return true;
    //     return false;
    // }
    string smallestPalindrome(string s) {
        // sort(s.begin(),s.end());
        // string ans="";
        // string w=s;
        // reverse(w.begin(),w.end());
        // string t=s+w;
        // int l=0,r=0;
        // for(;r<t.size();r++){
        //     if(r-l+1==s.size()){
        //         string test=t.substr(l,s.size());
        //         l++;
        //         if(ispalindrome(test)){
        //             if (ans==""||test<ans)
        //                 ans=test;
        //         }
        //     }
        // }

        vector<int>freq(26,0);
        for(char ch:s) freq[ch-'a']++;
        string left="";
        string mid="#";
        for(int i=0;i<26;i++){
            while(freq[i]>=2) {left+=('a'+i);
            freq[i]-=2;}
        }
        for(int i=0;i<26;i++){
            if(freq[i]==1) mid=('a'+i);
        }
        string ans="";
        ans+=left;
        if(mid!="#") ans+=mid;
        string right=left;
        reverse(right.begin(),right.end());
        ans+=right;
        return ans;
    }
};
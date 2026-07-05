class Solution {
public:
    int countBinarySubstrings(string s) {
        int cnt1=1,prev=0,res=0;
        int n=s.size();
       for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) cnt1++;
        else {
            // arr.push_back(cnt1);
            // cnt2++;
                prev=cnt1;
                cnt1=1;
        }
        if(cnt1<=prev) res++;
       }
       return res;
    }
};
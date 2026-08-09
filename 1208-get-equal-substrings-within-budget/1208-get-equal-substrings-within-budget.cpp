class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l=0,r=0;
        int ans=0,n=s.size(),cost=0;
        for(;r<n;r++){
            int diff=abs(s[r]-t[r]);
            cost+=diff;
            while(cost>maxCost){
                cost-=abs(s[l]-t[l]);
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
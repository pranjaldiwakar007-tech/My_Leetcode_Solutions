class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int len=g.size();
        int size=s.size();
        int l=0,r=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<size && r<len)
        {
            if(g[r]<=s[l])
            {
            r+=1;
            }
            l+=1;
        }
        return r;
    }
};
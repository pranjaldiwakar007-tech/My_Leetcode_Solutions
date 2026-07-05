class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res=0;
        vector<pair<int,int>> indices(26,{-1,-1});
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int ind=ch-'a';
            if(indices[ind].first==-1)
            {
                indices[ind].first=i;
            }
            indices[ind].second=i;
        }
        for(int i=0;i<26;i++){
            int l=indices[i].first;
            int r=indices[i].second;
            if(l==-1) continue;
    unordered_set<char > st;
    for(int m=l+1;m<=r-1;m++){
       st.insert(s[m]);
    }
    res+=st.size();
        }
        return res;
    }
    int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
};
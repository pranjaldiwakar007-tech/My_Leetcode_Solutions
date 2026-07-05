class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res=0;
         unordered_set<char>set;
        for(int i=0;i<s.size();i++){
           set.insert(s[i]);
        }
        for(char ch:set){
            int l=-1;
            int r=-1;
           for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                if(l==-1){
                    l=i;
                }
                r=i;
           }  
    }
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
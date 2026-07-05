class Solution {
public:
    int strStr(string s1, string s2) {
        int c=0;
        int m=s1.size();
        int n=s2.size();
      for(int i=0;i<=m-n;i++){
        for(int j=0;j<s2.size();j++){
            if(s1[i+j]!=s2[j])
            break;
        if(j==s2.size()-1) 
        return i;
        }
      }
      return -1; 
    }
    int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
};
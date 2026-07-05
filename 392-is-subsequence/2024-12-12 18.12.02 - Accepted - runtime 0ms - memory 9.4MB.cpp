class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
       map<char,vector<int>> mpp;
       for(int i=0;i<m;i++) mpp[t[i]].push_back(i);
       int prev=-1;
       for(int i=0;i<n;i++){
          char ch=s[i];
          if(mpp.find(ch)==mpp.end()) return false;
          vector<int> ind=mpp[ch];
          auto it=upper_bound(begin(ind),end(ind),prev);
          if(it==ind.end()) return false;
          prev=*it;
       }
       return true;
    }
    int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
     }();
};
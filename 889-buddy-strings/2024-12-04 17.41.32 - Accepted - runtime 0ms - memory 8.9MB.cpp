class Solution {
public:
    bool buddyStrings(string s, string goal) {
         if(s.size()!=goal.size()) return false;
         if(goal==s) return checkFre(s);
         vector<int> ind;
         for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i])
            ind.push_back(i);
         }
         if(ind.size()!=2) return false;
         swap(s[ind[0]],s[ind[1]]);
         return s==goal;
    }
    bool checkFre(string &s){
        vector<int> m(26,0);
        for(char &ch:s){
            m[ch-'a']++;
            if(m[ch-'a']>1)  return true;
        }
        return false;
    }
    int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
};
class Solution {
public:
    string reverseWords(string s) {
        int x=0;
        for(int i=0;i<s.size();i++){
          if(s[i]==' '){
          reverse(s.begin()+x,s.begin()+i);
            x=i+1;
          }
        }
        reverse(s.begin()+x,s.end());
        return s;
   }
   int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
};
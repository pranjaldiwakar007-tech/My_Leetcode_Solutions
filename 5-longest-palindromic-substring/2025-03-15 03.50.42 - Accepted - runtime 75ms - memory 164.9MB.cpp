class Solution {
public:
    string longestPalindrome(string s) {
    if (s.empty()) {
            return "";
        }
         int l=0,r=0;
     for(int i=0;i<s.size();i++){
      int odd=calc(i,i,s);
      int even=calc(i,i+1,s);
      int  maxi=max(odd,even);
        if(maxi>r-l){
          l=i-(maxi-1)/2;
          r=i+maxi/2;
        }
     }   
     return s.substr(l,r-l+1);
    }
    int calc(int x,int y,string s){
     while(x>=0&& y<s.size() &&s[x]==s[y] ){
            x--;
            y++;
        }
        return y-x-1;
    }
};
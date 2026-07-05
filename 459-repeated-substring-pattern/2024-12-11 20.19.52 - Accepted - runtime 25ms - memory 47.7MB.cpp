class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
         string x;
        int times=0;
        for(int i=n/2;i>=1;i--){
            if(n%i==0){
                 times=n/i;
                x=s.substr(0,i);
           string str="";
           while(times--){
                str+=x;
           }
           if(s==str) return true;
        }
    }
       return false; 
    }
    int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
};
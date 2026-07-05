class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
         string x;
        int times=0;
        for(int i=1;i<=n/2;i++){
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
};
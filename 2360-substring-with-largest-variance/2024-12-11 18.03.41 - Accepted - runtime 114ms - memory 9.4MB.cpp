class Solution {
public:
    int largestVariance(string s) {
        int hash[26]={0};
        int res=0;
          for(char &ch:s){
            hash[ch-'a']=1;
        }
        for(char i='a';i<='z';i++){
            for(char j='a';j<='z';j++){
                if(hash[i-'a']==0 || hash[j-'a']==0) continue;
                int fcnt=0,scnt=0;
                bool check=false;
        for(char &ch:s){
            if(ch==i) fcnt++;
            if(ch==j) scnt++;
            if(scnt>0) res=max(res,fcnt-scnt);
            else{
                if(check==true) 
                res=max(res,fcnt-1);
            } 
            if(fcnt<scnt){
                fcnt=0;
                scnt=0;
                check=true;
            }
        }
            }
        }
        return res;
    }
};
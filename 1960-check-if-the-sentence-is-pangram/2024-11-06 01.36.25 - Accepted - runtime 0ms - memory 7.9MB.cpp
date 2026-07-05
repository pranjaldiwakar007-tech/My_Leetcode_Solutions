class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int> num(26,0);
        int cnt=0;
        for(char &ch:s){
            int x=ch-'a';
            if(num[x]==0){
          num[x]++;
          cnt++;
        }
        }
        if(cnt==26) return true;
         return false;
    }
};
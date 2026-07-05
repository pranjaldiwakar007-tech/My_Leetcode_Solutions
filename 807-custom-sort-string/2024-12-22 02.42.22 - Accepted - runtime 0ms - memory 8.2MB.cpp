class Solution {
public:
    string customSortString(string order, string s) {
        int hash[26]={0};
        string res="";
        for(char ch:s)
          hash[ch-'a']++;
          for(char ch:order){
            while(hash[ch-'a']>0){
                res.push_back(ch);
                hash[ch-'a']--;
            }
          }
            for(char ch:s){
                if(hash[ch-'a']>0){
                    res.push_back(ch);
                }
            }
          return res;
    }
};
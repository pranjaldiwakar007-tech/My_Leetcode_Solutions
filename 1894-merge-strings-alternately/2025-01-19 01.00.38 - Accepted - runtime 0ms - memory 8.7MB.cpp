class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i;
        string res="";
         for( i=0;i<min(word1.size(),word2.size());i++){
            res+=word1[i];
            res+=word2[i];
         }
         if(word1.size()<word2.size()){
           string nw=word2.substr(i,word2.size());
           res+=nw;
         }
         if(word1.size()>word2.size()){
           string nw2=word1.substr(i,word1.size());
           res+=nw2;
         }
         return res;
    }
};
class Solution {
public:
    string compressedString(string word) {
        int cnt=0;
        string res;
       int i=0;
       while(i<word.size()){
        int cnt=0;
        char ch=word[i];
        while(i<word.size()  &&  cnt<9 && word[i]==ch){
            cnt++;
            i++;
        }
          res+=(to_string(cnt)+ch);
       }
       return res;
    }
};
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream s(sentence);
        int n=searchWord.size(),i=1;
        string word="";
        while(s>>word){
            if(word.substr(0,n)==searchWord)
            return i;
            i++;
        }
        return -1;
    }
};
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size(),cnt=0;
    for(char &ch:word){
            if(isupper(ch))
            cnt++;
        }
        if((cnt==n)||(cnt==0)||cnt==1 &&(isupper(word[0]))) return true;
       return false;
    }
    int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
};
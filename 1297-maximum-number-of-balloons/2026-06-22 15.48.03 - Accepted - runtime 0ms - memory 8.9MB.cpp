class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mpp;
        for(int i=0;i<text.size();i++){
            mpp[text[i]]++;
        }
        for(auto it:mpp){
            char letter=it.first;
            int cnt=it.second;
            if(letter == 'b' && cnt <1 ||
                letter == 'a' && cnt < 1 ||
                letter == 'l' && cnt < 2 ||
                letter == 'o' && cnt < 2 ||
                letter == 'n' && cnt < 1)
                return 0;
        }
        return min({mpp['b'], mpp['a'], mpp['l']/2, mpp['o']/2, mpp['n']});
    }
};
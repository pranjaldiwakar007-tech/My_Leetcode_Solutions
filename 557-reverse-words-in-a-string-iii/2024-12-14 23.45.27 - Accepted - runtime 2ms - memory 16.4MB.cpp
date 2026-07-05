class Solution {
public:
    string reverseWords(string s) {
        string token,res;
        stringstream ss(s);
        while(ss>>token){
            reverse(token.begin(),token.end());
            res+=token+" ";
        }
        return res.substr(0,res.size()-1); 
    }
};
class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int> num(26,0);
        for(char &ch:s){
            int x=ch-'a';
          num[x]++;
        }
        for(int &ch:num)
            if(ch==0) return false;
        return true;
    }
};
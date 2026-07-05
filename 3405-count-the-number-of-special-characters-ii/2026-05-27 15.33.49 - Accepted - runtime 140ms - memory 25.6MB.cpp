class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>lower,upper;
        int n=word.size();
        for(int i=0;i<word.size();i++){
            if(islower(word[i])) lower[word[i]]=i;
            else {if(upper.find(word[i])==upper.end()) upper[word[i]]=i;}
        }
        int cnt=0;
        for(auto it:lower){
            char ch=it.first;
            int ind=it.second;
            auto up=upper.find(toupper(ch));
            if(up!=upper.end()){
                int up_ind=up->second;
                if(ind<up_ind) cnt++;
            }
        }
        return cnt;
    }
};
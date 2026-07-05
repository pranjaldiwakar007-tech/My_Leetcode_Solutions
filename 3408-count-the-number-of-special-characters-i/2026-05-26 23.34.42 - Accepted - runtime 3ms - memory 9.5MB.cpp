class Solution {
public:
    int numberOfSpecialChars(string word) {
        // sort(word.rbegin(),word.rend());
        // map<int,int> mpp;
        // for(int i=0;i<n;i++){
        //     mpp[i]=word[i];
        // }
        // for(int i=0;i<n/2;i++){
        //     if(mpp.find(word[i])!=mpp.end() && mpp.find(toupper(word[i]))!=mpp.end())cnt++;
        // }
        // return cnt;
        int n=word.size();
        int cnt=0;
        map<char,int> lower,upper;
        for(char ch:word){
            if(islower(ch)) lower[ch]++;
            if(isupper(ch)) upper[ch]++;
        }
        for(auto it:lower){
            int count=it.second;
            char w=it.first;
            if(upper.find(toupper(w))!=upper.end()) cnt++;
        }
        return cnt;
    }
};
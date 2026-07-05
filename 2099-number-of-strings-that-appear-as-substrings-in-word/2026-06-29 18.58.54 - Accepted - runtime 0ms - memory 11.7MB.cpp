class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        // map<char,int> mpp;
        int cnt=0;
        for(auto &ch:patterns){
            // mpp[ch]++;
            if(word.find(ch)!=string::npos) cnt++;
        }
        // for(int i=0;i<patterns.size();i++){
        //     for(int it:patterns[i]){
        //         if(mpp.find(it)!=mpp.end()){
        //             cnt++;
        //             break;
        //         }
        //     }
        // }
        return cnt;
    }
};
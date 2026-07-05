class Solution {
public:
    int n;
     unordered_map<string,bool> mpp;
    bool isConcat(string word, unordered_set<string>& st) {
        int l = word.length();
        if(mpp.find(word)!=mpp.end()) return mpp[word];
        for(int i = 0; i<l; i++) {
            string prefix  = word.substr(0, i+1);
            string suffix  = word.substr(i+1);
            if((st.find(prefix) != st.end() && isConcat(suffix, st)) ||
               (st.find(prefix) != st.end() && st.find(suffix) != st.end()))
                return mpp[word]=true;
        }
        return mpp[word]=false;
        
    }
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        n = words.size();
        vector<string> result;
        unordered_set<string> st(begin(words), end(words));
        for(int i = 0; i<n; i++) {
            if(isConcat(words[i], st))
                result.push_back(words[i]);
        }
        return result;
    }
    int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
};
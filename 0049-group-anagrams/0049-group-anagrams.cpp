class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>>mpp;
        for(auto &t:strs){
            string word=t;
            sort(t.begin(),t.end());
            mpp[t].push_back(word);
        }
        for(auto &p:mpp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
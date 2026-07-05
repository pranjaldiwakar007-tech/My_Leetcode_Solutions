class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> range(26, false);
        for (int i = 0; i < allowed.size(); i++) 
            range[allowed[i] - 'a'] = true;
        int cnt = 0;
        for (string& word : words) {
            bool isConsistent = true;
            for (int i = 0; i < word.size(); i++) {
                if (!range[word[i] - 'a']) {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) 
                cnt++;
        }
        return cnt;
    }
};
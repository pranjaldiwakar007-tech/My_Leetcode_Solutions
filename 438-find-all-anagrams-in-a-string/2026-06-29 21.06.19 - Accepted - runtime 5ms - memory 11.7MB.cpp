class Solution {
public:
bool allzeroes(vector<int>&counter){
    for(auto &it:counter){
        if(it!=0) return false;
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        vector<int> counter(26,0);
        vector<int> ans;
        for(auto &it:p){
            counter[it-'a']++;
        }
        int i=0,j=0;
        while(j<s.size()){
            char ch=s[j];
            counter[ch-'a']--;
            int size=j-i+1;
            if(size==p.size()){
                if(allzeroes(counter)){
                    ans.push_back(i);
                }
                counter[s[i]-'a']++;
                i++;
            }
        j++;
        }
        return ans;
    }
};
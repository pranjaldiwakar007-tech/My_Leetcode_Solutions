class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        vector<int> freq(26,0);
        int push=0;
        for(int i=0;i<n;i++){
            char ch=word[i];
            freq[ch-'a']++;
        }
        sort(freq.rbegin(),freq.rend());
        for(int i=0;i<26;i++){
            if(freq[i]==0) break;
            push+=(i/8+1)*freq[i];
       }
       return push;
    }
};
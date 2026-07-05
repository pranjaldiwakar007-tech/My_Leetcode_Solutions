class Solution {
public:
    int minimumPushes(string word) {
        int push=0;
        vector<int >  fre(26,0);
        for(char ch:word)
        {
            ++fre[ch-'a'];
        }
        sort(fre.rbegin(),fre.rend());
        for(int i=0;i<26;++i)
        {
            if(fre[i]==0) break;
            push+=(i/8+1)*fre[i];
        
        }
        return push;
    }
};
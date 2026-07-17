class Solution {
public:
    int solve(int l,int r,string &word,int k){
        int cnt=0;
        for(int uc=1;uc<=26 && uc*k<=r-l+1;uc++){
            vector<int>freq(26,0);
            int i=l;
            int goodboy=0;
            for(int j=i;j<=r;j++){
                char ch=word[j];
                freq[ch-'a']++;
                if(freq[ch-'a']==k) goodboy++;
                if(freq[ch-'a']==k+1) goodboy--;
                if(j-i+1>uc*k){
                if(freq[word[i]-'a']==k) goodboy--;
                else if (freq[word[i]-'a']==k+1) goodboy++;
                freq[word[i]-'a']--;
                i++;
                }
                if(j-i+1==uc*k && goodboy==uc) cnt++;
            }
        }
        return cnt;
    }
    int countCompleteSubstrings(string word, int k) {
        int n=word.size();
        int l=0;
        int cnt=0;
        for(int i=1;i<=word.size();i++){
            if(i==n || abs(word[i]-word[i-1])>2){
                cnt+=solve(l,i-1,word,k);
                l=i;
            }
        }
        return cnt;
    }
};
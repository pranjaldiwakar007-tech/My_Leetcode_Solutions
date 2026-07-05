class Solution {
public:
    int minSteps(string s, string t) {
    int n=s.size();
    int hash1[26]={0};
    int hash2[26]={0};
    int res=0;
   for(int i=0;i<n;i++){
      hash1[s[i]-'a']++;
      hash2[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(hash1[i]>hash2[i]) res+=hash1[i]-hash2[i];
    }
    return res;
    }
};
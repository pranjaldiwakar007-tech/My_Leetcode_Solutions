class Solution {
public:
    bool closeStrings(string word1, string word2) {
       vector<int> freq1(26,0);
       vector<int> freq2(26,0);
       int n=word1.size(),m=word2.size();
       if(n!=m) return false;
       for(int i=0;i<n;i++){
        int x=word1[i]-'a';
        int y=word2[i]-'a';
        freq1[x]++;
        freq2[y]++;
    }
    for(int i=0;i<26;i++){
         if((freq1[i]!=0 && freq2[i]!=0)||(freq1[i]==0 && freq2[i]==0)) continue;
        return false; 
    }
    sort(freq1.begin(),freq1.end());
    sort(freq2.begin(),freq2.end());
    if (freq1==freq2) return true;
    else return false;
    }
};
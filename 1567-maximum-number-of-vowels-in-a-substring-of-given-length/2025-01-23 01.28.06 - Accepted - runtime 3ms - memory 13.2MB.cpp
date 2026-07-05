class Solution {
public:
    int maxVowels(string s1, int k) {
        int cnt=0,maxi=0;
        for(int j=0;j<k;j++){
                if(s1[j]=='a'||s1[j]=='e'||s1[j]=='i'||s1[j]=='o'||s1[j]=='u') cnt++;
        }
             maxi=max(maxi,cnt);
        for(int j=k;j<s1.size();j++){
            if(s1[j]=='a'||s1[j]=='e'||s1[j]=='i'||s1[j]=='o'||s1[j]=='u') cnt++;
            if(s1[j-k]=='a'||s1[j-k]=='e'||s1[j-k]=='i'||s1[j-k]=='o'||s1[j-k]=='u') cnt--;
                 maxi=max(maxi,cnt);
        }
        return maxi;
    }
};
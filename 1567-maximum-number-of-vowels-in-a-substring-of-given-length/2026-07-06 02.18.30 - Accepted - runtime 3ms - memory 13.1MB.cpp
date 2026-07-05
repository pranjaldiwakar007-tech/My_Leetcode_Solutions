class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt=0;
        int n=s.size();
        int l=0,r=0;
        int maxi=0;
        for(;r<n;r++){
            if(s[r]=='a'|| s[r]=='e'|| s[r]=='i'|| s[r]=='o'|| s[r]=='u'){
                cnt++;
                maxi=max(maxi,cnt);
            }
            if(r-l+1==k){
                if(s[l]=='a'|| s[l]=='e'|| s[l]=='i'|| s[l]=='o'|| s[l]=='u')
                cnt--;
                l++;
            }
        }
        return maxi;
    }
};
class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.size();
        int l=0,r=0,maxi=0;
        int cntt=0,cntr=0;
        for(;r<n;r++){
            if(s[r]=='T') cntt++;
            else cntr++;
            int mini=min(cntt,cntr);
            while(mini>k){
                if(s[l]=='T') cntt--;
                else cntr--;
                mini=min(cntt,cntr);
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};
class Solution {
public:
    int maxSubarrayLength(vector<int>& s, int k) {
    unordered_map<int,int>mpp;
    int l=0,r=0,n=s.size();
    int maxi=0;
    for(;r<n;r++){
        mpp[s[r]]++;
        while(mpp[s[r]]>k){
            mpp[s[l]]--;
            // if(mpp[s[l]]==0) mpp.erase(s[l]);
            l++;
        }
        maxi=max(maxi,r-l+1);
     }
     return maxi;
    }
};
typedef long long ll;
class Solution {
public:
    ll maximumTripletValue(vector<int>& nums) {
        ll maxi=0,maxtri=0,maxdif=0;
        for(ll i=0;i<nums.size();i++){
            if(i>1)maxtri=max(maxtri,maxdif*nums[i]);
            if(i>0)maxdif=max(maxdif,maxi-nums[i]);
            maxi=max(maxi,(ll)nums[i]);
        }
        return maxtri<0?0:maxtri;
    }
};
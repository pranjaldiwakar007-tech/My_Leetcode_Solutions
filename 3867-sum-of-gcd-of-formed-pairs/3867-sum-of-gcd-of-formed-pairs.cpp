class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        vector<int>prefixGcd(n);
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            prefixGcd[i]=gcd(nums[i],mx);
            // mini=min(mini, prefixGcd[i);;
            // maxi=max(maxi,prefixGcd[i]);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int l=0,r=prefixGcd.size()-1;
        long long sum=0;
        while(r>l){
            sum+=gcd(prefixGcd[l],prefixGcd[r]);
            r--;
            l++;
        }
        return sum;
    }
};
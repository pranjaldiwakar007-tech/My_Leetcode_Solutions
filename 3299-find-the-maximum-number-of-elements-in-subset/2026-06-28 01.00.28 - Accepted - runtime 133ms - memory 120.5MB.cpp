class Solution {
public:
    int maximumLength(vector<int>& nums) {
        // int n=nums.size();
        map<int,int>mpp;
        for(auto &i:nums){
            mpp[i]++;
        }
        int res=(mpp[1]-1)|1;
        for(auto &it:mpp){
            int i=it.first;
            int x=sqrt(i);
            int cnt=0;
            if(x*x==i && mpp.count(x) && mpp[x]>1) continue;
            while(i<31623 && mpp.count(i) && mpp[i]>1){
                cnt+=2;
                i*=i;
            }
            res=fmax(res,cnt+((mpp.count(i)<<1)-1));
        }
        return res;
    }
};
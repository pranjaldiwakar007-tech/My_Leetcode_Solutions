class Solution {
public:
#define ll long long
    long long beautifulSubstrings(string s, int k) {
        ll v=0,c=0,res=0;
        unordered_map<ll,unordered_map<ll,ll>> mpp;
        mpp[0][0]=1;
        for(char &ch:s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
            ll psum=v-c;
            for(auto [pcnt,cnt]:mpp[psum]){
                if((v%k-pcnt)*(v%k-pcnt)%k==0) res+=cnt;
            }
             mpp[psum][v%k]++;
        }
        return res;
    }
};
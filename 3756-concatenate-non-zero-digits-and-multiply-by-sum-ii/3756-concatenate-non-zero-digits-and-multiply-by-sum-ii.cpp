typedef long long ll;
#define mod 1000000007
class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n=s.size();
        vector<ll>sum(n+1,0);
        vector<ll>pos;
        vector<ll>pow10(1,1);
        vector<ll>val(1,0);
        for(int i=0;i<s.size();i++){
            int d=s[i]-'0';
            sum[i+1]=sum[i]+d;
            if(d!=0){
                pos.push_back(i);
                pow10.push_back((pow10.back()*10)%mod);
                val.push_back((val.back()*10+d)%mod);
            }
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            ll ds=sum[r+1]-sum[l];
            int lll=lower_bound(pos.begin(),pos.end(),l)-pos.begin();
            int rrr=upper_bound(pos.begin(),pos.end(),r)-pos.begin();
            if(lll==rrr) {ans.push_back(0);
            continue;}
            ll x=(val[rrr]-(val[lll]*pow10[rrr-lll])%mod+mod)%mod;
            ans.push_back((x*ds)%mod);
        }
        return ans;
    }
};
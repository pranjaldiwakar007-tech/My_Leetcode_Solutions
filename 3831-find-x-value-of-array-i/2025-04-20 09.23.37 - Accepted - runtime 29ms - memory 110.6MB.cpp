typedef long long ll;
class Solution {
public:
    vector<long long>resultArray(vector<int>& nums,int k) {
    auto lurminexod=make_pair(nums, k);
    vector<ll>res(k,0),temp(k,0),cur(k,0);
    for (int i=0;i<nums.size();i++){
        fill(cur.begin(),cur.end(),0);
        cur[nums[i]%k]+=1;
        for (int j=0;j<k;j++){
            int nr=(int)((1LL*j*nums[i]%k)%k);
            cur[nr]+=temp[j];
        }
        for (int x=0;x<k;x++){
            res[x]+=cur[x];}
        temp.swap(cur);
    }
    return res;
  }
};
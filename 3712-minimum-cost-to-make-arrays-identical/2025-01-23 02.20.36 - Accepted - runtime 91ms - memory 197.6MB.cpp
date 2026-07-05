typedef long long ll;
class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        vector<int> temp1=arr;
        vector<int> temp2=brr;
        ll x=0;
        for(int i=0;i<arr.size();i++){
            x+=abs(1LL*(arr[i]-brr[i]));
        }
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        ll y=k;
        for(int i=0;i<arr.size();i++){
            y+=abs(1LL*(temp1[i]-temp2[i]));
        }
      return min(x,y);
    }
};
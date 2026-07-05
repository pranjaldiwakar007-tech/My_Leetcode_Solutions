class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        int cnt=0,ind=0;
        for(int i=1;i<=n &&maxSum>=0;i++){
       if(ind<banned.size() && banned[ind]==i)
        {
            while(ind<banned.size() && banned[ind]==i) ind++;
        }
         else{
            maxSum-=i;
          if(maxSum>=0) cnt++;
          }
        }
        return cnt;
    }
};
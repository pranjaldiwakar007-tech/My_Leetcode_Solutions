class Solution {
public:
    int coinChange(vector<int>& arr, int T) {
        int n=arr.size();
        vector<int> prev(T+1,0),cur(T+1,0);
        for(int i=0;i<=T;i++) {
        if(i%arr[0]==0){
         prev[i]= i / arr[0]; }
         else prev[i]=1e9;
        }
        for(int ind=1;ind<n;ind++)
        {
            for(int j=0;j<=T;j++)
            {
                int notTaken = 0 + prev[j];
                int taken = INT_MAX;
                if(arr[ind] <= j)
                taken = 1 +cur[ j - arr[ind]];
                cur[j] = min(notTaken, taken);
            }
            prev=cur;
        }
        int ans=prev[T];
        if(ans >= 1e9)
        return -1;
        return ans;

    }
};
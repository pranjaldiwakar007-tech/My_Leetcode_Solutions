class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int n=gain.size();
      vector<int>ans(n+1);
      int maxi=-1e8;
      int sum=0;
      ans[0]=sum;
      maxi=max(maxi,ans[0]);
      for(int i=0;i<gain.size();i++){
        sum+=gain[i];
        ans[i+1]=sum;
        maxi=max(maxi,ans[i+1]);
      }  
      return maxi; 
    }
};
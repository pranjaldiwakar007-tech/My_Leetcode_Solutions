class Solution {
public:
    bool isprime(int n){
        if(n==2) return true;
        if(n==1||n%2==0)return false;
        for(int j=3;j<=sqrt(n);j+=2){
            if(n%j==0)return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>p;
        for(int i=left;i<=right;i++){
            if(isprime(i)){
                p.push_back(i);
            }
        }
            if(p.size()<2)return {-1,-1};
            vector<int>ans;
            int min=INT_MAX;
           for(int k=0;k<p.size()-1;k++){
            if(p[k+1]-p[k]<min){
                ans={p[k],p[k+1]};
                min=p[k+1]-p[k];
            }
        }
          return ans;
    }
};
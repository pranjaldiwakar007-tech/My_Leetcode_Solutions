class Solution {
public:
    int numberOfWays(string s) {
        int mod=1e9+7;
        vector<int> arr;
        int x=0;
        long long mul=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='S' ) arr.push_back(i);
        }
        if(arr.size()%2!=0||arr.size()==0) return 0;
        int prev=arr[1];
        for(int i=2;i<arr.size();i+=2){
          x=arr[i]-prev;
        mul=(mul*x)%mod;
          prev=arr[i+1];
        }
      return mul;
    }
};
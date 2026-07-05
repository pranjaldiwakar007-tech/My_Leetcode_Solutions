class Solution {
public:
    string smallestNumber(string s) {
        int n=s.size(),j=0;
        string res="";
        int arr[n+1];
        for(int i=0;i<=n;i++){
            arr[j++]=i+1;
            if(i==n||s[i]=='I'){
                while(j>0){
                    res+=to_string(arr[--j]);
                }
            }
        }
        return res;
    }
};
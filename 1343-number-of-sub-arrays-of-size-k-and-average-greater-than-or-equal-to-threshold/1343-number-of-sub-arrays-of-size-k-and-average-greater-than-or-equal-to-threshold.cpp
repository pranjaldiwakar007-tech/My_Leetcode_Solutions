class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l=0,r=0,cnt=0,sum=0;
        for(;r<arr.size();r++){
            sum+=arr[r];
            if(r-l+1==k){
                if(sum/k>=threshold){
                    cnt++;
                }
                sum-=arr[l];
                l++;
            }
        }
        return cnt;
    }
};
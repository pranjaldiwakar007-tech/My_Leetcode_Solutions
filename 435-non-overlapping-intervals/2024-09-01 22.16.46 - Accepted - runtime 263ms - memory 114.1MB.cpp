class Solution {
public:
static bool comp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
int eraseOverlapIntervals(vector<vector<int>>arr) {
    int cnt=1;
    int n=arr.size();
    sort(arr.begin(),arr.end(),comp);
            int lastEndTime=arr[0][1];
            for(int i=1;i<n;i++){
                if(arr[i][0]>=lastEndTime){
                    cnt++;
                    lastEndTime=arr[i][1];
                
                }
            }
            return n-cnt;
    }
};
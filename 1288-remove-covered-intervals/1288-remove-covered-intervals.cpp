class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int cnt=n;
        sort(intervals.begin(),intervals.end(),comp);
        int first=intervals[0][0];
        int second=intervals[0][1];
        for(int i=1;i<n;i++){
            int nxtfirst=intervals[i][0];
            int nxtsecond=intervals[i][1];
            if(first<=nxtfirst && second>=nxtsecond)  cnt--;
            else{
                first=nxtfirst;
                second=nxtsecond;
            }
        }
        return cnt;
    }
};
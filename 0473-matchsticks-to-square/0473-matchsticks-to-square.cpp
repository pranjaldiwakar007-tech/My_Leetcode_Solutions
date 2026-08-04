class Solution {
public:
    bool ispossible(vector<int>&jobs,vector<int> &left,int idx,int maxload){
        if(idx==-1) return true;
        int k=left.size();
        for(int i=0;i<k;i++){
            if(left[i]<jobs[idx]) continue;
            left[i]-=jobs[idx];
            if(ispossible(jobs,left,idx-1,maxload)) return true;
            left[i]+=jobs[idx];
            if(maxload==left[i]) break;
        }
        return false;
    }
    bool makesquare(vector<int>& jobs){
        int n=jobs.size();
        int k=4;
        // sort(jobs.begin(),jobs.end());
        // // if(k==n) return jobs[n-1];
        // int low=jobs[n-1];
        // int high=accumulate(jobs.begin(),jobs.end(),0LL);
        // while(high>low){
        //     int mid=low+(high-low)/2;
        //     vector<int>left(k,mid);
        //     if(ispossible(jobs,left,n-1,mid)){
        //         high=mid;
        //     }
        //     else low=mid+1;
        // }
        // return low;
        int sum=accumulate(jobs.begin(),jobs.end(),0LL);
        if(sum%k) return 0;
        int target=sum/k;
        vector<int>left(k,target);
        return ispossible(jobs,left,n-1,target);
    }
};
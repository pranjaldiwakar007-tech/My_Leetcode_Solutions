class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        // int minii=0,minij=1;
        vector<pair<double,pair<int,int>>>ans;
        // float x=1e8;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                double val=1.0*arr[i]/arr[j];
                    //ans.first=arr[i];
                    // ans.second.first=arr[j];
                    // ans.second.second=val;
                    ans.push_back({val,{arr[i],arr[j]}});
            }
        }
        sort(ans.begin(),ans.end());
        return {ans[k-1].second.first,ans[k-1].second.second};
    }
};
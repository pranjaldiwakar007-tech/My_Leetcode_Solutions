class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int lb=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
        int ub=upper_bound(arr.begin(),arr.end(),target)-arr.begin();
        if(lb==arr.size()||arr[lb]!=target) {lb=-1;ub=0;}
        return {lb,ub-1};
    }
};
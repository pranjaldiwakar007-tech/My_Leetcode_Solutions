class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0,high=mat[0].size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int row=maxel(mat,mid);
            int left=mid-1>=0?mat[row][mid-1]:-1;
            int right=mid+1<mat[0].size()?mat[row][mid+1]:-1;
            if(left<=mat[row][mid] && mat[row][mid]>=right){
                return {row,mid};
            }
            else if(left>mat[row][mid]) high=mid-1;
            else low=mid+1;
                }
            return {-1,-1};
    }
    int maxel(vector<vector<int>>& mat,int mid){
        int maxi=-1,ans=0;
        for(int i=0;i<mat.size();i++){
            if(mat[i][mid]>maxi){
                maxi=mat[i][mid];
                ans=i;
            }
        }
        return ans;
    }
};
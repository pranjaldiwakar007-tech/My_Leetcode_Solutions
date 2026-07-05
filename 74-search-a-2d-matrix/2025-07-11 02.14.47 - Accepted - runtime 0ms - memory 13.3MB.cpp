class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int cs=matrix[0].size(),rs=matrix.size();
        for(int i=0;i<matrix.size();i++){
            if(target>=matrix[i][0] && matrix[i][cs-1]>=target){
                int low=0,high=cs-1;
                while(low<=high){
                    int mid=low+(high-low)/2;
                    if(matrix[i][mid]<target) low=mid+1;
                    else if(matrix[i][mid]>target)high=mid-1;
                    else return true;
                }
            }
        }
        return false;
    }
};
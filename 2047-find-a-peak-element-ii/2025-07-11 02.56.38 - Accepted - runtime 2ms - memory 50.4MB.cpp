class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int maxi=INT_MIN,row=-1,col=-1;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]>maxi){
                    maxi=mat[i][j];
                    row=i;
                    col=j;
                }
            }
        }
        return {row,col};
    }
};
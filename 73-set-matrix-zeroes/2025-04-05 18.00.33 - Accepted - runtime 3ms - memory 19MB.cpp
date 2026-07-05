class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>temp=matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    int i_new=i;
                    for(int k=0;k<matrix[0].size();k++){
                        temp[i_new][k]=0;
                }
                int j_new=j;
                    for(int k=0;k<matrix.size();k++){
                        temp[k][j_new]=0;
                    }
                }
            }
        }
        matrix=temp;
    }
};
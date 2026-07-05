class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        
        int n=points.size();
        int m=points[0].size();

        vector<long long>cur(m+1,0),prev(m+1,0);

        for(int i=0;i<m;i++){
            prev[i]=points[0][i];
        }

        for(int i=1;i<n;i++){

            vector<long long>left(m),right(m);
            
            left[0]=prev[0];

            for(int j=1;j<m;j++){
             left[j]=max(left[j-1]-1,prev[j]);
            }

            right[m-1]=prev[m-1];

            for(int j=m-2;j>=0;j--){
             right[j]=max(right[j+1]-1,prev[j]);
            }

            for(int j=0;j<m;j++){
                cur[j]=points[i][j]+max(left[j],right[j]);
            }
            prev=cur;
        }

        long long ans=INT_MIN;

        for(int i=0;i<m;i++){
            ans=max(ans,prev[i]);
        }

        return ans;
    }
};
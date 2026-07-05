class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int rep=-1,nr=-1;
        int size=n*n;
        vector<int>freq(size+1,0);
        for(auto r:grid){
            for(int num:r){
                freq[num]++;
            }
        }
        for(int num=1;num<=size;num++){
                if(freq[num]==2) rep=num;
                if(freq[num]==0) nr=num;
            }
     return {rep,nr};
    }
};
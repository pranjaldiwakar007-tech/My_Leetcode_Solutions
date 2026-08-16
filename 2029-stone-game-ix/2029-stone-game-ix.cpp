class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int f[3]={0,0,0};
        for(auto &it:stones){
            f[it%3]++;
        }
        if(f[0]%2==0){
            return f[2]>=1 && f[1]>=1;    
        }
        return abs(f[1]-f[2])>=3;
    }
};
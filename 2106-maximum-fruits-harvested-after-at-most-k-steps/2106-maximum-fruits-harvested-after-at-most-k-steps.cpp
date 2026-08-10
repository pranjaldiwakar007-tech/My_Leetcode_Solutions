class Solution {
public:
    int solve(int l,int r,int pos){
        return min(abs(pos-l)+r-l,abs(r-pos)+r-l);

    } 
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int l=0,r=0,sum=0,maxi=0;
        for(;r<fruits.size();r++){
            sum+=fruits[r][1];
            while(l<=r && solve(fruits[l][0],fruits[r][0],startPos)>k){
                sum-=fruits[l][1];
                l++;
            }
        maxi=max(maxi,sum);
        }
        return maxi;
    }
};
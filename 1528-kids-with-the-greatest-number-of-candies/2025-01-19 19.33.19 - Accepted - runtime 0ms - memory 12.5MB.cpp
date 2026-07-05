class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res(candies.size());
        int c=0;
        for(int i=0;i<candies.size();i++){
          c=max(c,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=c) res[i]=true;
            else res[i]=false;
        }
        return res;
    }
};
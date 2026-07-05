class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> front(2,vector<int>(3,0)),cur(2,vector<int>(3,0));
        int cap=2;
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                for(int cap=1;cap<=2;cap++){
              if(buy==1)
        cur[buy][cap]=max(-prices[ind]+front[0][cap],
        front[1][cap]);
        else
        cur[buy][cap]=max(prices[ind]+front[1][cap-1],
        front[0][cap]);
                }
                front=cur;
            }
        }
        return front[1][2];
    }
};
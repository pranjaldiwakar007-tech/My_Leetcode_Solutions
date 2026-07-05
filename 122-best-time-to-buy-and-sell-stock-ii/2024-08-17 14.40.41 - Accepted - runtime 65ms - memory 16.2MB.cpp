class Solution {
public:    
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n=prices.size();
        vector<int> front(n+1,0),cur(n+1,0);
        front[0]=front[1]=0;
        for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
         if(buy)
        profit=max(-prices[ind]+front[0],front[1]);
        else
        profit=max(prices[ind]+front[1],front[0]);
        cur[buy]=profit;
            }
            front=cur;
        }
         return front[1];
    }
};
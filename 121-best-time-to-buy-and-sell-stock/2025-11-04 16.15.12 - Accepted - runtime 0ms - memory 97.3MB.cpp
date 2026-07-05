class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int n=prices.size();
        int cost=prices[0];
        for(int i=0;i<n;i++){
       if(cost>prices[i]) cost=prices[i];
        int profit=prices[i];
        maxi=max(maxi,profit-cost);
        }
        return maxi;
    }
};
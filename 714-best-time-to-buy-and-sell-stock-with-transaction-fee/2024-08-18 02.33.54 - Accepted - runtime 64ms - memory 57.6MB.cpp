class Solution {
public:    
    int maxProfit(vector<int>& prices,int fee) {
        int n=prices.size();
        int curnotbuy,curbuy;
        int frontnotbuy=0;
        int frontbuy=0;
        for(int ind=n-1;ind>=0;ind--){
        curbuy=max(-prices[ind]+frontnotbuy,frontbuy);
        curnotbuy=max((prices[ind]-fee)+frontbuy,frontnotbuy);
        frontnotbuy=curnotbuy;
        frontbuy=curbuy;
        }
         return frontbuy;
    }
};
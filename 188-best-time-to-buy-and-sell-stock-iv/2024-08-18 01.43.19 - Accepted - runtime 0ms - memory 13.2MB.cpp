class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
     int n=prices.size();
        vector<int> after(2*k+1,0),cur(2*k+1,0);
        for(int ind=n-1;ind>=0;ind--){
            for(int transno=2*k-1;transno>=0;transno--){
            if(transno%2==0){
       cur[transno]=max(-prices[ind]+after[transno+1],after[transno]);}
        else
        cur[transno]=max(prices[ind]+after[transno+1],after[transno]);
            }
            after=cur;
        }
         return after[0];
    }
};
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int cnt=0;
        int l=0,r=cost.size()-1;
        sort(cost.rbegin(),cost.rend());
        if(cost.size()<=2) return accumulate(cost.begin(),cost.end(),0LL);
        // while(l<=r){
        //     if(min(cost[l],cost[l+1])>=cost[r]){
        //         cnt+=(cost[l]+cost[l+1]);
        //     }
        //     l+=2;
        //     r--;
        // }
        // for(int i=0;i<cost.size()-1;i++){
        //     if(min(cost[i],cost[i+1])>=cost[i+2]){
        //     cnt+=(cost[i]+cost[i+1]);
        //     i+=2;
        //     }
        // }
        for(int i=0;i<cost.size();i++){
            if(i%3!=2){
                cnt+=cost[i];
            }
        }
        // for(int w=x;w<cost.size();w++){ //for left values which are required to buy
        //     cnt+=cost[w];
        // }
        return cnt;
    }
};
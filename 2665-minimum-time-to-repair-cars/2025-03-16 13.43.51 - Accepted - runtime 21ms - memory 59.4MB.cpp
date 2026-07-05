typedef long long ll;
class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
    ll low=1,high=*max_element(ranks.begin(),ranks.end());
    high=(ll)high*cars*cars;
    while(low<high){
        ll mid=(high+low)/2;
        if(can(mid,ranks,cars)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
        }
        bool can(ll time,vector<int>& ranks, int cars){
            ll cnt=0;
            for(int rank:ranks){
                cnt+=sqrt(time/rank);
                if(cnt>=cars)return true;
            }
            return false;
        }
};
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        vector<int> mark=gifts;
        int n=gifts.size();
        sort(gifts.begin(),gifts.end());
        for(int i=0;i<k;i++){
             int rem=0;
             for(int j=0;j<n;j++){
                 if(gifts[rem]<gifts[j])
                 rem=j;
             }
             gifts[rem]=sqrt(gifts[rem]);
        }
        long long int res=accumulate(gifts.begin(),gifts.end(),0LL);
         return res;
    }
};
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                mpp[nums[i]*nums[j]]++;
            }
        }
        int res=0;
        for(auto it:mpp){
            if(it.second>1){
                res+=cal(it.second);
            }
        }
        return res*8;
    }
    int cal(int val){
        int q=val/2;
        if(val%2==0){
            return val*q-q;
        }
        else return val*q;
    }
};
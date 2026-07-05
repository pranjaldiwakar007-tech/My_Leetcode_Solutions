class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>> vec;
        for(int i=0;i<nums.size();i++){
           int n=getmap(nums[i],mapping);
           vec.push_back({n,i});
        }
        sort(vec.begin(),vec.end());
        vector<int> res;
        for(auto &p:vec){
            res.push_back(nums[p.second]);
        }
        return res;
    }
    int getmap(int num,vector<int>& mapping){
        if(num<10) return mapping[num];
         int mappedNum  = 0;
        int plaveValue = 1;
        while(num) {
            int lastDigit   = num%10;
            int mappedDigit = mapping[lastDigit];
            mappedNum += plaveValue * mappedDigit;
            plaveValue *= 10;
            num/= 10;
        }
        return mappedNum;
    }
};
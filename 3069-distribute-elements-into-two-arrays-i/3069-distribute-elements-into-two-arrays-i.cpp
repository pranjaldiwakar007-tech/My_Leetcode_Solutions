class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>temp1,temp2;
        if(nums.size()==1) return {nums[0]};
        temp1.push_back(nums[0]);
        temp2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(temp1.back()>temp2.back()){
                temp1.push_back(nums[i]);
            }
            else temp2.push_back(nums[i]);
        }
        vector<int>ans;
        for(int i=0;i<temp1.size();i++) ans.push_back(temp1[i]);
        for(int i=0;i<temp2.size();i++)
        ans.push_back(temp2[i]);
        return ans;
    }
};
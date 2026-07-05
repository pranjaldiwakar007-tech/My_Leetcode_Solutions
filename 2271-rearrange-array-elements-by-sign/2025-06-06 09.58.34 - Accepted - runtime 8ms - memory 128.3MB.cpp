class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>temp(nums.size());
        int pos=0,neg=1;
        for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            temp[pos]=nums[i];
          if(pos<nums.size()-3)  pos+=2;
        }
        else{
            temp[neg]=nums[i];
          if(neg<nums.size()-1)  neg+=2;
        }
        }
        return temp;
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            cnt++;
        }
    }
   int i=0,x=0,y=cnt;
   vector<int>temp(nums.size(),0);
    while(cnt!=0){
        if(nums[i]!=0){
            temp[x]=nums[i];
            x++;
            cnt--;
        }
        i++;
    }
    nums=temp;
    }
};
class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int i=0,cnt=0;
        vector<int>temp;
        while(cnt<nums.size()){
            if(nums[cnt]!=i+1){
                temp.push_back(i+1);
                i++;
            }
            else{
                cnt++;
                i++;
            }
            if(temp.size()==k)return temp[k-1];
        }
        while(temp.size()<k){
            temp.push_back(i+1);
            i++;
        }
        return temp[k-1];
    }
};
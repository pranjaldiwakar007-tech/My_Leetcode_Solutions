class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& nums, int k) {
         nums.insert(nums.end(),nums.begin(),nums.begin()+(k-1));
         int i=0,j=i+1,cnt=0;
         while(j<nums.size()){
            if(nums[j-1]!=nums[j]){
                if(j-i+1==k){
                    cnt++;
                    i++;
                }
                j++;
            }
            else {
                i=j;j++;
                continue;
            }
         }
       return cnt;
    }
};
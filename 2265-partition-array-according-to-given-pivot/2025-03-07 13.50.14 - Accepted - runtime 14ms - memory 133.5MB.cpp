class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int cnt=0;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot)cnt++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                arr.push_back(nums[i]);
            }
        }
        while(cnt--){
            arr.push_back(pivot);
        }
            for(int i=0;i<nums.size();i++){
                if(nums[i]>pivot){
                    arr.push_back(nums[i]);
                }
        }
        return arr;
    }
};
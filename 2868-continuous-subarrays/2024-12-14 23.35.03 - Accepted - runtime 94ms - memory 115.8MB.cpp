class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long res=0;
        deque<int> min,max;
        int l=0;
        for(int r=0;r<nums.size();r++){
            while(!min.empty() && nums[min.back()]>=nums[r]) min.pop_back();
            while(!max.empty() && nums[max.back()]<=nums[r]) max.pop_back();
            min.push_back(r);
            max.push_back(r);
        while(nums[max.front()]-nums[min.front()]>2){
            l++;
            if(min.front()<l) min.pop_front();
            if(max.front()<l) max.pop_front();
         }
         res+=r-l+1;
    }
    return res;
  }
};
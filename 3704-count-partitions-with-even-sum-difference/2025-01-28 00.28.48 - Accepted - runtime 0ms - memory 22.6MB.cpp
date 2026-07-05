class Solution {
public:
    int countPartitions(vector<int>& nums) {
    int cnt=0; 
        for(int i=0;i<nums.size()-1;i++){
            int s1=accumulate(nums.begin(),nums.begin()+i+1,0); 
            int s2=accumulate(nums.begin()+i+1,nums.end(),0);
            if(abs(s1-s2)%2==0){ 
                cnt++; 
           }
        } 
        return cnt; 
    }
};
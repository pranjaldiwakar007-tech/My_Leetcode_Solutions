class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int cnt=0,fd,ld;
        for(int i=0;i<nums.size()-1;i++){
            for(int x=nums[i];x>0;x=x/10){
                fd=x%10;
            }
            for(int j=i+1;j<nums.size();j++){
                ld=nums[j]%10;
                if(gcd(fd,ld)==1) cnt++;
            }
        }
        return cnt;
    }
};
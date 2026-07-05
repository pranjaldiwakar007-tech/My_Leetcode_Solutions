class Solution {
public:
    string largestOddNumber(string nums) {
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            int digit=nums[i]-'0';
            if(digit%2!=0) return nums.substr(0,i+1);
        }
        return "";
    }
};
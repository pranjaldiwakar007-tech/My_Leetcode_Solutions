class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int cnt=0;
        int x=0,maxi=0;
        for(auto &it:st){
            if(st.find(it-1)==st.end()){
                x=it;
                cnt=1;
            }
            while(st.find(x+1)!=st.end()){
                x++;
                cnt++;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};
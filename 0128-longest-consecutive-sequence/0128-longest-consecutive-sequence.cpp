class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.empty()) return 0;
       unordered_set<int>st(nums.begin(),nums.end());
       int x=0,cnt=1,maxi=1;
       for(auto &it:st){
        if(st.find(it-1)==st.end()){
            x=it;
            cnt=1;
        while(st.find(x+1)!=st.end()){
            cnt++;
            x++;
            }
        }
        maxi=max(maxi,cnt);
       }
    return maxi;
    }
};
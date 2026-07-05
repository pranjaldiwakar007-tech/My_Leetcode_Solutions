class Solution {
public:
    int maxActiveSectionsAfterTrade(string str) {
        int cnt = 0;
        for (char c : str)
            if (c == '1')
                cnt++;
        string s="1"+str+"1";
        vector<pair<char, int>> arr;
        for (char c:s) {
            if (!arr.empty()&&arr.back().first==c)
                arr.back().second++;
            else
                arr.emplace_back(c,1);
        }
        int maxi=0;
        for (int i=1;i<arr.size()-1;i++){
            if (arr[i].first=='1'&&arr[i-1].first=='0'&&arr[i+1].first=='0'){
                maxi=max(maxi,arr[i-1].second+arr[i+1].second);}
        }
        return cnt+maxi;
    }
};

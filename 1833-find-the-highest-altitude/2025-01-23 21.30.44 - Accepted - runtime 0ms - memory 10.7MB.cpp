class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> s;
        int maxi=0,sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
           s.push_back(sum);
           maxi=max(maxi,s[i]);
        }
        return maxi;
    }
};
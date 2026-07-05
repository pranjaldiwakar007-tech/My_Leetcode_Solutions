class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int k) {
        int n=height.size();
        vector<int>ans;
        for(int i=1;i<n;i++){
            if(height[i-1]>k)
            ans.push_back(i);
        }
        return ans;
    }
};
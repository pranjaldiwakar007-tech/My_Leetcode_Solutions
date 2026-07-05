class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxa=0,cura,mini;
        int n=height.size();
        int l=0,r=n-1;
        while(l<r){
            mini=min(height[l],height[r]);
            cura=mini*(r-l);
            maxa=max(cura,maxa);
            if(height[l]<height[r])l++;
            else r--;
        }
        return maxa;
    }
};
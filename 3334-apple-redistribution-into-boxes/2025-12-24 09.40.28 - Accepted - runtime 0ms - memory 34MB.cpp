class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int cnt=0,sum=0;
        int n=capacity.size();
        int s=accumulate(apple.begin(),apple.end(),0LL);
        sort(capacity.rbegin(),capacity.rend());
        for(int i=0;i<n;i++){
            if(sum<s) {
                sum+=capacity[i];
                cnt++;
            }
            else continue;
        }
        return cnt;
    }
};
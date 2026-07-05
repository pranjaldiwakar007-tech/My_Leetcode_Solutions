auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
public:

    bool Possible(vector<int>& position, int m, int mid)
    {
        int ball = 1;
        int lastPos = position[0];

        for(int i = 0; i<position.size(); i++)
        {
            if(position[i] - lastPos >= mid)
            {
                ball++;
                if(ball==m)
                {
                    return true;
                }
                 lastPos = position[i];
            }
        }

        return false;
    }

    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(),position.end());

        int s=0;
        int maxi= -1;
        for(int i =0; i<position.size();i++)
        {
            maxi  = max(maxi,position[i]); 
        }

        int e = maxi;

        int ans = -1;
        int mid = s+ (e-s+1)/2;

        while(s<=e)
        {
            if(Possible(position,m,mid))
            {
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
            mid = s+(e-s+1)/2;
        }
        return ans;
        }
};

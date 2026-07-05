class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cnt=count(blocks.begin(),blocks.begin()+k,'W');
        int mini=cnt;
        for(int l=0,r=k;r<blocks.size();l++,r++){
            cnt+=(blocks[r]=='W')-(blocks[l]=='W');
            mini=min(mini,cnt);
        }
        return mini;
    }
};
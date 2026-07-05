class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start^goal;
        return countSetBits(x);
    }
    int countSetBits(int x){
        int cnt=0;
        while(x!=0){
            x=x&(x-1);
            cnt++;
        }
        return cnt;
    }
};
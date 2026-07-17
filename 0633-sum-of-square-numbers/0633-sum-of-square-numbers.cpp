typedef long long ll;
class Solution {
public:
    bool judgeSquareSum(int c) {
        ll l=0;
        ll r=sqrt(c);
        while(l<=r){
            ll num=l*l+r*r;
            if(num==c) return true;
            else if(num<c) l++;
            else r--;
        }
        return false;
    }
};
class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,mul=1;
        for(int i=n;i>0;i/=10){
            int m=i%10;
            sum+=m;
            mul*=m;
        }
        int val=sum+mul;
        if(n%val==0) return true;
        return false;
    }
};
class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int mul=1;
            for(int j=i;j>0;j/=10){
                int r=j%10;
                mul*=r;
            }
            if(mul%t==0) return i;
        }
        return 0;
    }
};
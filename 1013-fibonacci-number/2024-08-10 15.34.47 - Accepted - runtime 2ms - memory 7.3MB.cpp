class Solution {
public:
    int fib(int n) {
        if(n==1) return 1;
        else{
        int a=0,b=1,sum=0;
        for(int i=0;i<n-1;++i)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        return sum;
        }
    }
};
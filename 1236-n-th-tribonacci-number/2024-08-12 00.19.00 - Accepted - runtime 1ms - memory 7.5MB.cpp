class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1,tri=0;
        if(n<2) return n;
        for(int i=3;i<=n;++i)
        {
            tri=a+b+c;
            a=b;
            b=c;
            c=tri;

        }
        return c;
    }
};
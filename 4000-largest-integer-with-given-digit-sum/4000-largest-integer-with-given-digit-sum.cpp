class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0) return s;
        int maxi=-1;
        int k;
        if(n==1) k=9;
        else if(n==2) k=99;
        else if(n==3) k=999;
        else if(n==4) k=9999;
        else k=99999;
        for(int i=1;i<=k;i++){
            int sum=0;
            for(int j=i;j>0;j/=10){
                int r=j%10;
                sum+=r;
            }
            if(sum==s) maxi=max(maxi,i);
        }
        return maxi;
    }
};
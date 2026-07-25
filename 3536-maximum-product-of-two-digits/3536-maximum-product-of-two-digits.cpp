class Solution {
public:
    int maxProduct(int n) {
        int prev=0,k=0;
     for(int i=n;i>0;i/=10){
        if(i%10>=k) {
            prev=k;
            k=i%10;
        }
        else{
            if(i%10>prev){
               prev=i%10;
            }
        }
     }
     return k*prev;   
    }
};
class Solution {
public:
    int countOperations(int num1, int num2) {
    double cnt=0;
        while(num1>0 && num2>0){
            if(num1>=num2){
num1=num1-num2;
            }
            else num2=num2-num1;
            cnt++;
            if(num1==0|| num2==0) break;
        }
        if(num1==0|| num2==0) return cnt;
        return -1;
    }
};
class Solution {
public:
    bool checkPowersOfThree(int n) {
        int i=n;
       while(i>0){
        if(i%3==2) return false;
        i=i/3;
       }
       return true;
    }
};
class Solution {
public:
    int rotatedDigits(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            bool valid=true,change=false;
            for(int j=i;j>0;j/=10){
              int c=j%10;
              if(c==3 || c== 4 || c== 7) { valid=false;
              break;}
              if(c==2|| c==5|| c==6||c==9) {
                change=true;
              } 
            }
            if(valid&&change) cnt++;
        }
        return cnt;
    }
};
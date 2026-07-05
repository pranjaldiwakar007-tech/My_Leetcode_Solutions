class Solution {
public:
    int bestClosingTime(string customers) {
        // int cnt=0;
        int n=customers.size();
        // for(int i=0;i<n;i++){
        //          if(customers[i]=='Y') cnt++;
        //          else cnt--;
        //                     if(cnt<0) cnt=0;
        // }
        // return cnt;
        int pen=0;
        int cnt=0;
        for(char c:customers){
            if(c=='Y') pen++;
        }
        int maxpen=pen;
        for(int i=0;i<n;i++){
            if(customers[i]=='Y') pen--;
            else pen++;

            if(pen<maxpen){
                maxpen=pen;
                cnt=i+1;
            }
        }
        return cnt;
    }
};
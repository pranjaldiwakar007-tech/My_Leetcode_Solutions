class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt=0,maxi=-1e9,mini=1e9,cntl=0,cntr=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') cntl++;
            if(moves[i]=='R') cntr++;
        }
        for(int i=0;i<moves.size();i++){
            if(cntl>=cntr){
            if(moves[i]=='L' || moves[i]=='_') cnt++;
            else cnt--;
            } 
            else{
            if(moves[i]=='R' || moves[i]=='_')cnt++;
            else cnt--;
            }
            // maxi=max(maxi,cnt);
            // mini=min(mini,cnt);
        }
        // mini=abs(mini);
        return cnt;
    }
};
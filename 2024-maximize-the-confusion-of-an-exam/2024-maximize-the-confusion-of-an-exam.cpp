class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int cnt=0;
        int cntt=0,cntf=0;
        int maxi=0;
        // for(auto &i:answerKey){
        //     if(i=='T') cntt++;
        //     else cntf++;
        // }
        int l=0,r=0;
        for(;r<answerKey.size();r++){
            if(answerKey[r]=='F'){
                cnt++;
            }
            while(cnt>k){
                if(answerKey[l]=='F')
                    cnt--;
                    l++;
            }
            maxi=max(maxi,r-l+1);
            } 
        cnt=0,l=0,r=0;
            for(;r<answerKey.size();r++){
            if(answerKey[r]=='T'){
                cnt++;
            }
            while(cnt>k){
                if(answerKey[l]=='T')
                    cnt--;
                    l++;
            }
            maxi=max(maxi,r-l+1);
        } 
        return maxi;
    }
};
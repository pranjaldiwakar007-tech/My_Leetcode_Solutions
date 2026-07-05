class Solution {
public:
    int maxScore(string s) {
        int sum=0;
        for(int i=1;i<s.size();i++){
            int cnt1=0,cnt2=0;
            string s1=s.substr(0,i);
            string s2=s.substr(i,s.size()-1);
            for(int j=0;j<s1.size();j++){
                if(s1[j]=='0') cnt1++;
            }
            for(int j=0;j<s2.size();j++){
                if(s2[j]=='1') cnt2++;
            }
               sum=max(sum,cnt1+cnt2);
        }
        return sum;
    }
};
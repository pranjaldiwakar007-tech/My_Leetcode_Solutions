class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int lcnt=0,rcnt=0;
        for(int i=0;i<n/2;i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') lcnt++;
           if(s[i+n/2]=='A'||s[i+n/2]=='E'||s[i+n/2]=='I'||s[i+n/2]=='O'||s[i+n/2]=='U'||s[i+n/2]=='a'||s[i+n/2]=='e'||s[i+n/2]=='i'||s[i+n/2]=='o'||s[i+n/2]=='u') rcnt++;
        }
        if(rcnt==lcnt) return true;
        else return false;
    }
};
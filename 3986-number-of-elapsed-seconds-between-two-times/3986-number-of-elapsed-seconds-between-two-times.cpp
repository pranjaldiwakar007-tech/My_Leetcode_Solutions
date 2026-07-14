class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        int sh=stoi(s.substr(0,2));
        int sm=stoi(s.substr(3,2));
        int ss=stoi(s.substr(6,2));
        int eh=stoi(e.substr(0,2));
        int em=stoi(e.substr(3,2));
        int es=stoi(e.substr(6,2));
        int ans=0;
        ans+=(60-ss+es);
        ans+=(59-sm+em)*60;
        ans+=(eh-sh-1)*3600;
        return ans;
    }
};
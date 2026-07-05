class Solution {
public:
         bool palindrome(const string &str) {
        int n=str.size();
        for(int i=0;i<n/2;i++){
            if(str[i]!=str[n-1-i])
                return false;
        }
        return true;
    }
    int longestPalindrome(string s, string t) {
        int maxi=0;
        vector<string> s1,s2;
        int n=s.size(),m=t.size();
        for (int i=0;i<n;i++) {
            for (int j=1;i+j<=n;j++){
                s1.push_back(s.substr(i,j));
            }
        }
        for (int i=0;i<m;i++){
           for (int j=1;i+j<=m;j++){ 
                s2.push_back(t.substr(i,j));
            }
        }
        s1.push_back("");
        s2.push_back("");
        for (string &str1:s1) {
            for (string &str2:s2) {
                string con=str1+str2;
                if (!con.empty()&&palindrome(con)) {
                    maxi=max(maxi,(int)con.size());
                }
            }
        }
        return maxi;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        string temp=s[0];
        int si=temp.size();
        for(int i=1;i<n;i++){
            string rr=s[i];
            while(si>rr.length() || temp!=rr.substr(0,si)){
                si--;
             if(si==0) return "";
            temp=temp.substr(0,si);
            }
        }
        return temp;
    }
};
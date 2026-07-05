class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prev=strs[0];
        int prevlen=prev.length();
        for(int i=1;i<strs.size();i++){
            string s=strs[i];
            while(prevlen>s.size()||s.substr(0,prevlen)!=prev){
                prevlen--;
                if(prevlen==0) return "";
            prev=prev.substr(0,prevlen);
            }
        }
        return prev;
    }
};
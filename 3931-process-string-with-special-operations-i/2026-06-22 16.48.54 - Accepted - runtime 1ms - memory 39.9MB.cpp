class Solution {
public: 
    string processStr(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(islower(s[i])) res.push_back(s[i]);
            else if (s[i]=='*'){
               if(!res.empty()) res.erase(res.size()-1,1);}
            else if (s[i]=='#') {res+=res;}
            else if (s[i]=='%') {reverse(res.begin(),res.end());}
        }
        return res;
    }
};
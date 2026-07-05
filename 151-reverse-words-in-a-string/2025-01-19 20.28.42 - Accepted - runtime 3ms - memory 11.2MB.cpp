class Solution {
public:
    string reverseWords(string s) {
        string a;
        vector<string > aa;
        stringstream ss(s);
       while(ss>>a){
        aa.push_back(a);
       }
     string res;
     for(int i=aa.size()-1;i>-1;i--){
        res+=aa[i];
        if(i!=0) res+=" ";
     }
     return res;
    }
};
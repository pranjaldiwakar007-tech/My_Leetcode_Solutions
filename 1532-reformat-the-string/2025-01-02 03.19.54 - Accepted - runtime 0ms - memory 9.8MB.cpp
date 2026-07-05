class Solution {
public:
    string reformat(string s) {
        string a="",d="";
        for(auto x:s)
            isalpha(x)?a.push_back(x):d.push_back(x);
            if(abs(int(a.size()-d.size()))>1) return "";
        bool send=a.size()>d.size();
        int i=0,j=0,k=0;
        while(i<s.size()){
            if(send){
                s[i++]=a[j++];
            }
            else{
                s[i++]=d[k++];
            }
            send=!send;
        }
        return s;
    }
};
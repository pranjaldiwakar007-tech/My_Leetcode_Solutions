class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mpp;
        int start_i=0;
        if(s.size()<t.size()) return "";
        if(s==t) return s;
        for(auto &it:t){
            mpp[it]++;
        }
        int l=0;
        int miniSize=1e9,cnt=t.size();
        int r=0;
        for(;r<s.size();r++){
            if(mpp.find(s[r])!=mpp.end()){
                if(mpp[s[r]]>0) cnt--;
                mpp[s[r]]--;
            }
            while(cnt==0){
                // miniSize=min(miniSize,r-l+1);
                if(r-l+1<miniSize){
                    miniSize=r-l+1;
                    start_i=l;
                }
                if(mpp.find(s[l])!=mpp.end()) {mpp[s[l]]++;
                if(mpp[s[l]]>0){
                cnt++;
                } }   
                l++;
            }
        }
        if(miniSize==1e9) return ""; //didnt thought
        return s.substr(start_i,miniSize);
    }
};
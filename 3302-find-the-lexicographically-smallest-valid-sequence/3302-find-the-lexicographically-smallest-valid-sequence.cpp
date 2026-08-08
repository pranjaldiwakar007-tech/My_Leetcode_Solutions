class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int j=m-1;
        vector<int>ans;
        vector<int>suf(n+1,0);
        for(int i=n-1;i>=0;i--){
                if(j>=0 && word1[i]==word2[j]){
                    suf[i]=suf[i+1]+1;
                    j--;
                }
                else{
                    suf[i]=suf[i+1];
                }
        }
        bool check=false;
        int pos=0;
        for(int i=0;i<m;i++){
            for(int j=pos;j<n;j++){
                if(word1[j]==word2[i]){
                    ans.push_back(j);
                    pos=j+1;
                    break;
                }
                if(!check){
                    int rem=m-i-1;
                    if(suf[j+1]>=rem){
                        ans.push_back(j);
                        pos=j+1;
                        check=true;
                        break;
                    }
                }
            }
            if(ans.size()!=i+1) return {};
        }
        return ans;
    }
};
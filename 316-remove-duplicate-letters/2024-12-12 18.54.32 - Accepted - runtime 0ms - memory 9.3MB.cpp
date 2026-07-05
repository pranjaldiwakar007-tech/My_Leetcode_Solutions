class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        string result;
        vector<bool> visited(26,false);
        vector<int> last(26);
        for(int i=0;i<n;i++){
            char ch=s[i];
            last[ch-'a']=i;
        }
        for(int i=0;i<n;i++){
        int ind=s[i]-'a';
        if(visited[ind]==true) continue;
          while(result.size()>0 && result.back()>s[i] && last[result.back()-'a']>i){
            visited[result.back()-'a']=false;
            result.pop_back();
          }
          result.push_back(s[i]);
          visited[ind]=true;
        }
        return result;
    }
};
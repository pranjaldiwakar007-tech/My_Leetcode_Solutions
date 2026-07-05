class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st;
        // int level=0;
        int n=wordList.size();
        for(auto it:wordList){
            st.insert(it);
        }
        if(!st.count(endWord)) return 0;
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        // level++;
        st.erase(beginWord);
        while(!q.empty()){
            string n=q.front().first;
            int lev=q.front().second;
            q.pop();
            for(int i=0;i<n.size();i++){
                char original=n[i];
                for(char ch='a';ch<='z';ch++){
                   if(ch==original) continue;
                   n[i]=ch;
                    if(n==endWord) return lev+1;
                    if(st.find(n)!=st.end()){
                        q.push({n,lev+1});
                        // level++;
                        st.erase(n);
                    }
                    n[i]=original;
                    // if(n==endWord) return lev;
                }
            }
        }
        return 0;
    }
};
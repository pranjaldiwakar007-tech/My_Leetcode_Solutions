class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> st(begin(folder),end(folder));
        vector<string> res;
        for(string cur:st){
            bool x=false;
             string temp= cur;
             while(!cur.empty()){
            auto slash=cur.find_last_of('/');
            cur=cur.substr(0,slash);
            if(st.find(cur)!=st.end()){
                x=true;
            }
        }
        if(!x) res.push_back(temp);
        }
        return res;
    }
};
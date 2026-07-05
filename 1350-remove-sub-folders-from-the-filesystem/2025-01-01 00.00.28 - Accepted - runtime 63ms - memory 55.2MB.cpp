class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string> res;
        res.push_back(folder[0]);
        for(int i=1;i<folder.size();i++){
            string cur=folder[i];
            string last=res.back();
            last+='/';
            if(cur.find(last)!=0){
                res.push_back(cur);
            }
        }
        return res;
    }
};
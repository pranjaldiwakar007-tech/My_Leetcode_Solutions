class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<string> v1=get(version1);
         vector<string> v2=get(version2);
         int i=0;
         while(i<v1.size()||i<v2.size()){
    int a=i<v1.size()?stoi(v1[i]):0;
    int b=i<v2.size()? stoi(v2[i]):0;
    if(a>b)return 1;
    else if(a<b) return -1;
    else i++;
         }
    return 0;
    }
    vector<string> get(string v){
        vector<string> res;
        stringstream ss(v);
        string token="";
        while(getline(ss,token,'.')){
         res.push_back(token);
        }
        return res;
    }
};
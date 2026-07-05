class Solution {
public:
    int maximumSwap(int num) {
        string n=to_string(num);
        vector<int> nn(10,-1);
        for(int i=0;i<n.size();i++){
            nn[n[i]-'0']=i;
        }
        for(int i=0;i<n.size();i++){
         for(int j=9;j>(n[i]-'0');j--){
            if(nn[j]>i) {swap(n[i],n[nn[j]]);
            return stoi(n); }
         }
        }
        return num;
    }
};
class Solution {
public:
    int maximumSwap(int num) {
        string n=to_string(num);
        vector<int> nn(n.size());
        nn[n.size()-1]=n.size()-1;
        for(int i=n.size()-2;i>=0;i--){
           nn[i]=n[i]>n[nn[i+1]]? i:nn[i+1];
        }
        for(int i=0;i<n.size();i++){
            if(n[i]<n[nn[i]]){
                swap(n[i],n[nn[i]]);
               return stoi(n);
            }
        }
        return num;
    }
};
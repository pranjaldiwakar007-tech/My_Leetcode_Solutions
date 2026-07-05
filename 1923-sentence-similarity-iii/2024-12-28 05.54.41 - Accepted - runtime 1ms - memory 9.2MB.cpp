class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if(s1.size()<s2.size()) swap(s1,s2);
        string token;
        vector<string> v1,v2;
        stringstream ss(s1);
        while(ss>>token){
            v1.push_back(token);
        }
        stringstream s(s2);
        while(s>>token){
            v2.push_back(token);
        }
        int i=0,j=v1.size()-1;
        int k=0,l=v2.size()-1;
       while(k<v2.size() && i<v1.size() && v1[i]==v2[k]){
            i++;
            k++;
        }
        while(l>=k && v1[j]==v2[l]){
            j--;
            l--;
        }
       if(l<k)return true;
       return false; 
    }
};
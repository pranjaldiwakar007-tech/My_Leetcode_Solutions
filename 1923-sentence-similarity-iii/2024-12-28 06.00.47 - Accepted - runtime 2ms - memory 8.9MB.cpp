class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if(s1.size()<s2.size()) swap(s1,s2);
        string token;
        deque<string> v1,v2;
        stringstream ss(s1);
        while(ss>>token){
            v1.push_back(token);
        }
        stringstream s(s2);
        while(s>>token){
            v2.push_back(token);
        }
    while(!v1.empty() && !v2.empty() && v1.front()==v2.front()){
        v1.pop_front();
        v2.pop_front();
       }
       while(!v1.empty() && !v2.empty() &&v1.back()==v2.back()){
        v1.pop_back();
        v2.pop_back();
       }
       if(!v2.empty()) return false;
       return true;
    }
};
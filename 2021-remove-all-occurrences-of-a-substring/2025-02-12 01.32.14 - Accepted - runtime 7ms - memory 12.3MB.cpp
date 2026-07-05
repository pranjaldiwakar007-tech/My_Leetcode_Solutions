class Solution {
public:
    string removeOccurrences(string s, string part) {
     string res="";
     for(char &ch:s){
        res.push_back(ch);
      if(res.size()>=part.size() && res.substr(res.size()-part.size())==part) 
     res.erase(res.size()-part.size());
     }
     return res; 
    }
};
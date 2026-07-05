class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size()) return s;
        int rep=2*numRows-2;
        string res="";
            for(int i=0;i<numRows;i++){
              for(int j=0;i+j<s.size();j+=rep){
                       res.push_back(s[j+i]);
                       if(i!=0 && i!=numRows-1 && j-i+rep<s.size()){
                        res.push_back(s[j-i+rep]);
                       }
              }
        }
        return res;
    }
};
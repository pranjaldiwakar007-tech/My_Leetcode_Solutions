class Solution {
public:
    string clearDigits(string s) {
        int i=0;
       while(i<s.size()){
         if(s[i]>'z'||s[i]<'a'){
            s.erase(i,1);
            s.erase(i-1,1);
            i--;
         }
         else i++;
        }
        return s;
    }
};
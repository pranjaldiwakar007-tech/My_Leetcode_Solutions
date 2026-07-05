class Solution {
public:
    int getLucky(string s, int k) {
        string str= "";
        for (char ch : s) {
            str += to_string(ch - 'a' + 1);
        }
        while (k-- > 0) {
            int sum= 0;
            for (char digit : str) {
                sum += digit - '0';
            }
           str = to_string(sum);
        }
        return stoi(str);
    }
};
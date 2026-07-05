class Solution {
public:
    string findValidPair(string str) {
         unordered_map<char, int> freq;
    
    for (char ch : str) {
        freq[ch]++;
    }

    for (size_t i = 0; i < str.length() - 1; i++) {
        char a = str[i];
        char b = str[i + 1];

        if (a == b) continue;

        if (freq[a] == (a - '0') && freq[b] == (b - '0')) {
            return string(1, a) + string(1, b);
        }
    }
    return "";
    }
};
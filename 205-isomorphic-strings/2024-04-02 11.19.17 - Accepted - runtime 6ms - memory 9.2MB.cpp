class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.length() != t.length()) {
        return false;
    }

    std::unordered_map<char, char> sToT;
    std::unordered_map<char, char> tToS;

    for (size_t i = 0; i < s.length(); ++i) {
        char charS = s[i];
        char charT = t[i];

        // Check if the mapping already exists
        if (sToT.find(charS) != sToT.end()) {
            if (sToT[charS] != charT) {
                return false;
            }
        } else {
            sToT[charS] = charT;
        }

        // Check if the reverse mapping already exists
        if (tToS.find(charT) != tToS.end()) {
            if (tToS[charT] != charS) {
                return false;
            }
        } else {
            tToS[charT] = charS;
        }
    }

    return true;

        
    }
};
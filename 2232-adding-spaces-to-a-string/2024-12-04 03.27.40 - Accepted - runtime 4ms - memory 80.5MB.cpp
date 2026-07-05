class Solution {
public:
    string addSpaces(string& s, vector<int>& spaces) {
        const int m = spaces.size(), n = s.size();
        string temp(n + m, ' ');        
        int j = 0; 
        for (int i = 0; i < n; i++) {
            if (j < m && i == spaces[j]) {
                temp[i+j] = ' '; 
                j++;     
            }
            temp[i+j]=s[i];
        }
        return temp;
    }
};
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string, int> preMap;
        for (int num : arr1) {
            string strNum = to_string(num);
            string pre = "";
            for (char ch : strNum) {
                pre += ch;
                preMap[pre]++;
            }
        }
        int maxi = 0;
        for (int num : arr2) {
            string strNum = to_string(num);
            string pre = "";
            for (char ch : strNum) {
                pre += ch;
                if (preMap.find(pre)!= preMap.end()) 
                maxi = max(maxi,static_cast<int>(pre.size()));
            }
        }
        return maxi;
    }
};
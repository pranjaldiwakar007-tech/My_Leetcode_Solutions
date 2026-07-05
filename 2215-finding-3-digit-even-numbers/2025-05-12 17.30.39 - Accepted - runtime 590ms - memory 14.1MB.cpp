class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int freq[10] = {0};
        for (int d : digits) freq[d]++;
        set<int> result;
        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {
                    if (i == j || j == k || i == k) continue;
                    int a = digits[i], b = digits[j], c = digits[k];
                    if (a == 0) continue;
                    if (c % 2 != 0) continue; 
                    int num = a * 100 + b * 10 + c;
                    int tempFreq[10] = {0};
                    tempFreq[a]++;
                    tempFreq[b]++;
                    tempFreq[c]++;

                    bool valid = true;
                    for (int d = 0; d < 10; d++) {
                        if (tempFreq[d] > freq[d]) {
                            valid = false;
                            break;
                        }
                    }
                    if (valid) result.insert(num);
                }
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};

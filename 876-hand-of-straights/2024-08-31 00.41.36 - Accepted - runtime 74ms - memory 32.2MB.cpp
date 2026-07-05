class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> map;
        for(const int it : hand)
           map[it]++;
        for(auto& [st, _] : map) {
            int value = map[st];
            if (value > 0) {
        for(int i = st; i < st + groupSize; ++i) {
                    map[i] -= value;
                    if (map[i] < 0)
                        return false;
                }
            }
        }
        return true;
    }
};

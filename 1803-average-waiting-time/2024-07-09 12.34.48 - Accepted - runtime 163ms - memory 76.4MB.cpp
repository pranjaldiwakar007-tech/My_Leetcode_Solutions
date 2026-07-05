class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
         int n = customers.size();
        double wT = 0;
        int tU = 0;
        for (int i = 0; i < n; ++i) {
            int a = customers[i][0];
            int cT = customers[i][1];
            tU = max(tU, a) + cT;
            wT += tU - a;
        }
        return wT / n;

    }
};
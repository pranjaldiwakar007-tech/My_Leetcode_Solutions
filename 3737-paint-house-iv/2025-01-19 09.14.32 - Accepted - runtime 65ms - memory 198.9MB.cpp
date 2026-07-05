class Solution {
public:
    long long minCost(int n, vector<vector<int>>& cost) {
        int num_pairs = n / 2;
        vector<vector<int>> zalvoritha;
        zalvoritha.reserve(num_pairs);
        for(int p = 0; p < num_pairs; ++p){
            zalvoritha.push_back(cost[p]);
        }
        const long long INF = 1e18;
        long long dp_prev[3][3];
        for(int c1 = 0; c1 < 3; ++c1){
            for(int c2 = 0; c2 < 3; ++c2){
                dp_prev[c1][c2] = INF;
            }
        }
        int i = 0;
        int j = n-1;
        for(int c1 = 0; c1 < 3; ++c1){
            for(int c2 = 0; c2 < 3; ++c2){
                if(c1 != c2){
                    dp_prev[c1][c2] = (long long)cost[i][c1] + (long long)cost[j][c2];
                }
            }
        }
        for(int p = 1; p < num_pairs; ++p){
            i = p;
            j = n-1-p;
            long long dp_curr[3][3];
            for(int c1 = 0; c1 < 3; ++c1){
                for(int c2 = 0; c2 < 3; ++c2){
                    dp_curr[c1][c2] = INF;
                }
            }
            for(int prev_c1 = 0; prev_c1 < 3; ++prev_c1){
                for(int prev_c2 = 0; prev_c2 < 3; ++prev_c2){
                    if(dp_prev[prev_c1][prev_c2] == INF){
                        continue;
                    }
                    for(int c1 = 0; c1 < 3; ++c1){
                        for(int c2 = 0; c2 < 3; ++c2){
                            if(c1 != c2 && c1 != prev_c1 && c2 != prev_c2){
                                dp_curr[c1][c2] = min(dp_curr[c1][c2], dp_prev[prev_c1][prev_c2] + (long long)cost[i][c1] + (long long)cost[j][c2]);
                            }
                        }
                    }
                }
            }
            for(int c1 = 0; c1 < 3; ++c1){
                for(int c2 = 0; c2 < 3; ++c2){
                    dp_prev[c1][c2] = dp_curr[c1][c2];
                }
            }
        }
        long long result = INF;
        for(int c1 = 0; c1 < 3; ++c1){
            for(int c2 = 0; c2 < 3; ++c2){
                if(dp_prev[c1][c2] < result){
                    result = dp_prev[c1][c2];
                }
            }
        }
        return result;
    }
};
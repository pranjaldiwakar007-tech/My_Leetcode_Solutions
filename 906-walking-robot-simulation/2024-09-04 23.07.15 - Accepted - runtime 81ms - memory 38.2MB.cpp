class Solution {
private:
    static const int HASH_MULTIPLIER =
        60013;

    int hashCoordinates(int x, int y) { return x + HASH_MULTIPLIER * y; }

public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<int> obstacleSet;
        for (auto& obstacle : obstacles) {
            obstacleSet.insert(hashCoordinates(obstacle[0], obstacle[1]));
        }
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        vector<int> cur = {0, 0};
        int maxDistanceSquared = 0;
        int curDi = 0; 

        for (int command : commands) {
            if (command == -1) {
                curDi = (curDi+ 1) % 4;
                continue;
            }
            if (command == -2) {
                curDi = (curDi + 3) % 4;
                continue;
            }
            vector<int> direction = directions[curDi];
            for (int step = 0; step < command; step++) {
                int nextX = cur[0] + direction[0];
                int nextY = cur[1] + direction[1];
                if (obstacleSet.contains(hashCoordinates(nextX, nextY))) {
                    break;
                }
                cur[0] = nextX;
                cur[1] = nextY;
            }

            maxDistanceSquared =
                max(maxDistanceSquared,
                    cur[0] * cur[0] +
                        cur[1] * cur[1]);
        }

        return maxDistanceSquared;
    }
};
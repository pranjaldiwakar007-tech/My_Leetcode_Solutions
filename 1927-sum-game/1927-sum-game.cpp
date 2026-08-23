class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int half = n / 2;
        int leftSum = 0;
        int rightSum = 0;
        int leftQuestion = 0;
        int rightQuestion = 0;
        for (int i = 0; i < n; i++) {
            if (i < half) {
                if (num[i] == '?') {
                    leftQuestion++;
                } else {
                    leftSum += num[i] - '0';
                }
            } 
            else {
                if (num[i] == '?') {
                    rightQuestion++;
                } else {
                    rightSum += num[i] - '0';
                }
            }
        }
        if ((leftQuestion + rightQuestion) % 2 == 1) {
            return true;
        }
        int sumDifference = leftSum - rightSum;
        int questionDifference = leftQuestion - rightQuestion;
        return sumDifference + (questionDifference / 2) * 9 != 0;
    }
};
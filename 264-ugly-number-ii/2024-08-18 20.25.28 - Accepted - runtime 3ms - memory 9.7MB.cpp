class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);  
        ugly[0] = 1;      
        int indexMultipleOf2 = 0, indexMultipleOf3 = 0, indexMultipleOf5 = 0;
        int nextMultipleOf2 = 2, nextMultipleOf3 = 3, nextMultipleOf5 = 5;
        for (int i = 1; i < n; i++) {
            int nextUglyNumber =
                min(nextMultipleOf2, min(nextMultipleOf3, nextMultipleOf5));
            ugly[i] = nextUglyNumber;

            if (nextUglyNumber == nextMultipleOf2) {
                indexMultipleOf2++;
                nextMultipleOf2 = ugly[indexMultipleOf2] * 2;
            }
            if (nextUglyNumber == nextMultipleOf3) {
                indexMultipleOf3++;
                nextMultipleOf3 = ugly[indexMultipleOf3] * 3;
            }
            if (nextUglyNumber == nextMultipleOf5) {
                indexMultipleOf5++;
                nextMultipleOf5 = ugly[indexMultipleOf5] * 5;
            }
        }

        return ugly[n - 1]; 
    }
};
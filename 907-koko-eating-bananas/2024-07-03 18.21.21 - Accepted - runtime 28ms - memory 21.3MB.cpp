class Solution {
public:
    int maxEl(vector<int>& piles) {
        int maxi = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long totalHours(vector<int>& piles, int hrs) {
        long long total = 0;
        for(int i = 0; i < piles.size(); i++) {
            total += (piles[i] + hrs - 1) / hrs; 
        }
        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxEl(piles);
        while(low <= high) {
            int mid = low + (high - low) / 2;
            long long total = totalHours(piles, mid);
            if(total <= h) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
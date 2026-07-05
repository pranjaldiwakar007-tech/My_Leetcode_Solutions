class Solution {
public:
const int MOD = 1e9 + 7;

// Function to compute modular exponentiation
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute modular inverse using Fermat's Little Theorem
long long modInverse(long long x, long long mod) {
    return modExp(x, mod - 2, mod);
}

// Precompute factorials and their modular inverses
void precomputeFactorials(int maxVal, long long fact[], long long invFact[]) {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i <= maxVal; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[maxVal] = modInverse(fact[maxVal], MOD);
    for (int i = maxVal - 1; i > 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

// Function to calculate nCk % MOD
long long nCk(int n, int k, long long fact[], long long invFact[]) {
    if (k > n || k < 0) return 0;
    return (fact[n] * invFact[k] % MOD) * invFact[n - k] % MOD;
}

    int distanceSum(int m, int n, int k) {
         int gridSize = m * n;

    // Precompute factorials and modular inverses
    long long fact[gridSize + 1], invFact[gridSize + 1];
    precomputeFactorials(gridSize, fact, invFact);

    // Total sum of distances
    long long totalSum = 0;

    // Calculate row contributions
    for (int x = 0; x < m; x++) {
        long long contribution = (1LL * x * (m - x)) % MOD;
        contribution = (contribution * n % MOD) * n % MOD;  // Total pairs of columns
        contribution = (contribution * nCk(gridSize - 2, k - 2, fact, invFact)) % MOD;
        totalSum = (totalSum + contribution) % MOD;
    }

    // Calculate column contributions
    for (int y = 0; y < n; y++) {
        long long contribution = (1LL * y * (n - y)) % MOD;
        contribution = (contribution * m % MOD) * m % MOD;  // Total pairs of rows
        contribution = (contribution * nCk(gridSize - 2, k - 2, fact, invFact)) % MOD;
        totalSum = (totalSum + contribution) % MOD;
    }

    return totalSum;
    }
};
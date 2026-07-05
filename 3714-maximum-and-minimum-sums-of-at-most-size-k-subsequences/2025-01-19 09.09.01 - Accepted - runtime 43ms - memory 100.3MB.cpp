typedef long long ll; 
const int MOD = 1e9 + 7; 
class Solution { 
public: 
int minMaxSums(vector<int>& nums, int k) { 
int n = nums.size(); 
vector<long long> inv(n + 2, 1); 
for(int i=2;i<=n;i++) { 
inv[i] = MOD - (MOD / i) * inv[MOD % i] % MOD; 
} 
int k_prime = k -1; 
vector<long long> Ck(n +1, 0); 
if(k_prime >=1){ 
Ck[k_prime] =1; 
for(int m =k_prime +1; m<=n; m++){ 
Ck[m] = (Ck[m-1] * m) % MOD; 
Ck[m] = (Ck[m] * inv[m -k_prime]) % MOD; 
} 
} 
vector<long long> sumC(n +1, 0); 
if(k_prime <1){ 
for(int m=0; m<=n; m++) sumC[m] =1; 
} 
else{ 
sumC[0] =1; 
for(int m=1; m<=n; m++){ 
sumC[m] = (2 * sumC[m-1]) % MOD; 
if(m-1 >=k_prime){ 
sumC[m] = (sumC[m] - Ck[m-1] + MOD) % MOD; 
} 
} 
} 
vector<int> sortedAsc = nums; 
sort(sortedAsc.begin(), sortedAsc.end()); 
vector<int> sortedDesc = sortedAsc; 
reverse(sortedDesc.begin(), sortedDesc.end()); 
ll sumMin =0; 
for(int i=0; i<n; i++){ 
int m = n -i -1; 
if(m <0) continue; 
ll contrib = sortedAsc[i]; 
if(m >=0){ 
contrib = contrib * sumC[m] % MOD; 
} 
sumMin = (sumMin + contrib) % MOD; 
} 
ll sumMax =0; 
for(int i=0; i<n; i++){ 
int m = n -i -1; 
if(m <0) continue; 
ll contrib = sortedDesc[i]; 
if(m >=0){ 
contrib = contrib * sumC[m] % MOD; 
} 
sumMax = (sumMax + contrib) % MOD; 
} 
ll total = (sumMin + sumMax) % MOD; 
return (int)total; 
} 
};
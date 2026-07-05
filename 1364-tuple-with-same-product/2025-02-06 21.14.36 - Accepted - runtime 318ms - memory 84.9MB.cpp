class Solution {
public:
int calculate(int val) {
int q = val / 2;
if (val % 2 == 0){
return val * q - q;
 }
else{
return val * q;
  }
}
    int tupleSameProduct(vector<int>& nums) {
     unordered_map<int, int> pro;
    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            pro[nums[i] * nums[j]]++;
        }
    }
    int res = 0;
    for (auto& it : pro) {
        if (it.second > 1) {
            res += calculate(it.second);
        }
    }
    return 8 * res; 
}
};
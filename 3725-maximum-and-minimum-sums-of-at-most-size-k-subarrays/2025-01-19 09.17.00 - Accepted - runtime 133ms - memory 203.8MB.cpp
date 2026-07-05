#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    long long minMaxSubarraySum(vector<int>& nums, int k) {
        int n = (int)nums.size();
        vector<long long> pMin(n), nMin(n), pMax(n), nMax(n);
        {
            stack<int> st;
            for(int i=0;i<n;i++){
                while(!st.empty()&&nums[st.top()]>nums[i]) st.pop();
                pMin[i]=st.empty()?-1LL:st.top();
                st.push(i);
            }
        }
        {
            stack<int> st;
            for(int i=n-1;i>=0;i--){
                while(!st.empty()&&nums[st.top()]>=nums[i]) st.pop();
                nMin[i]=st.empty()?n:st.top();
                st.push(i);
            }
        }
        {
            stack<int> st;
            for(int i=0;i<n;i++){
                while(!st.empty()&&nums[st.top()]<nums[i]) st.pop();
                pMax[i]=st.empty()?-1LL:st.top();
                st.push(i);
            }
        }
        {
            stack<int> st;
            for(int i=n-1;i>=0;i--){
                while(!st.empty()&&nums[st.top()]<=nums[i]) st.pop();
                nMax[i]=st.empty()?n:st.top();
                st.push(i);
            }
        }
        auto countPairs=[&](long long L,long long R,long long M){
            long long x=min(L,M+1), ans=0;
            if(x<=0) return 0LL;
            long long j0=M-(R-1);
            if(j0>=x) ans=x*R;
            else if(j0<0){
                ans=(long long)x*(M+1)-(long long)x*(x-1)/2;
            } else {
                long long part1=(j0+1)*R;
                long long xlen=x-(j0+1);
                long long sumJ=(x-1)*x/2, sumJ0=j0*(j0+1)/2;
                long long part2=xlen*(M+1)-(sumJ - sumJ0);
                ans=part1+part2;
            }
            return ans;
        };
        long long res=0;
        for(int i=0;i<n;i++){
            long long L=i - pMin[i], R=nMin[i] - i, M=k-1;
            long long c=countPairs(L,R,M);
            res+=c*nums[i];
        }
        for(int i=0;i<n;i++){
            long long L=i - pMax[i], R=nMax[i] - i, M=k-1;
            long long c=countPairs(L,R,M);
            res+=c*nums[i];
        }
        return res;
    }
};
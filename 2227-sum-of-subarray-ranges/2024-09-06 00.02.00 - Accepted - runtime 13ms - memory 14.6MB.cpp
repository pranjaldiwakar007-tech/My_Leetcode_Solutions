class Solution {
public:

vector<int>findnse(vector<int> &arr){
int n=arr.size();
vector<int> nse(n);
stack<int> st;
for(int i=n-1;i>=0;i--){
while(!st.empty() && arr[st.top()]>=arr[i])
st.pop();
nse[i]=st.empty()?n:st.top();
st.push(i);
}
return nse;
}

vector<int> findpsee(vector<int> &arr){
int n=arr.size();
vector<int> psee(n);
stack<int> st;
for(int i=0;i<n;i++){
while(!st.empty() && arr[st.top()]>arr[i])
st.pop();
psee[i]=st.empty()?-1:st.top();
st.push(i);
}
return psee;
}

vector<int> findnge(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> nge(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) st.pop();
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nge;
    }

 long long minsum(vector<int>& nums) {
        int n = nums.size();
        long long total = 0;
        vector<int> nse = findnse(nums);
        vector<int> pse = findpsee(nums);
        for (int i = 0; i < n; i++) {
            long long left = i - pse[i];
            long long right = nse[i] - i;
            total += left * right * nums[i];
        }
        return total;
    }

vector<int> findpge(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> pge(n);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) st.pop();
            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pge;
    }

long long maxsum(vector<int>& nums) {
        int n = nums.size();
        long long total = 0;
        vector<int> nge = findnge(nums);
        vector<int> pge = findpge(nums);
        for (int i = 0; i < n; i++) {
            long long left = i - pge[i];
            long long right = nge[i] - i;
            total += left * right * nums[i];
        }
        return total;
    }

    long long subArrayRanges(vector<int>& nums) {
        return maxsum(nums)-minsum(nums);
    }
};
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nge;
        vector<int> result(nums1.size());
        stack<int> st;
        for (int i = nums2.size() - 1; i >= 0; --i) {
           
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
           nge[nums2[i]] = st.empty() ? -1 : st.top();
            st.push(nums2[i]);
        }
        for (int i = 0; i < nums1.size(); ++i) {
            result[i] = nge[nums1[i]];
        }
        return result;
    }
};
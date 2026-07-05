class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int>s1,s2;
        vector<int> C(A.size());
        int n=A.size();
        for(int i=0;i<n;i++){
        s1.insert(A[i]);
        s2.insert(B[i]);
        int cnt=0;
        for(int i:s1){
            if(s2.count(i))
            cnt++;
        }
        C[i]=cnt;
        }
        return C;
    }
};
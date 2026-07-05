class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int cnt=1;
        unordered_set<int >st1(arr.begin(),arr.end()),st2;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
             if(arr[i]==arr[i-1]){
                cnt++;
             }
             else{
                st2.insert(cnt);
                cnt=1;
             }
        }
        st2.insert(cnt);
        if(st1.size()==st2.size()) return true;
        return false;
    }
};
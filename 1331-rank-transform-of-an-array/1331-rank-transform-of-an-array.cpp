class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<arr.size();i++){
            pq.push({arr[i],i});
        }
        int prev=INT_MAX;
        int rank=0;
        while(!pq.empty()){
            int val=pq.top().first;
            int r=pq.top().second;
            if(val!=prev) rank++;
            arr[r]=rank;
            prev=val;
            pq.pop();
        }
        return arr;
    }
};
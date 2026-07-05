class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
        for(int i=0;i<arr.size();i++) minh.push({arr[i],i});
        int prev=INT_MAX;
        int rank=0;
        while(!minh.empty()){
        if(minh.top().first!=prev) rank++;
        arr[minh.top().second]=rank;
        prev=minh.top().first;
        minh.pop(); 
        }
        return arr;
    }
};
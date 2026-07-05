class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int target=graph.size()-1;
        vector<vector<int>>res;
        vector<int>temp;
        dfs(graph,target,res,temp,0);
        return res;
    }
    void dfs(vector<vector<int>>&graph,int target,vector<vector<int>> &res,vector<int>temp,int curNode){
        temp.push_back(curNode);
        if(curNode==target){
            res.push_back(temp);
        }
        else{
            for(auto it:graph[curNode]){
                dfs(graph,target,res,temp,it);
            }
        }
        temp.pop_back();
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
unordered_map<Node*,Node*>mpp;
void dfs(Node* node){
    Node* copy=new Node(node->val);
    mpp[node]=copy;
    for(auto it:node->neighbors){
        if(mpp.find(it)!=mpp.end()){
            copy->neighbors.push_back(mpp[it]);
        }
        else {
                     dfs(it);
            copy->neighbors.push_back(mpp[it]);
        }
    }
}
    Node* cloneGraph(Node* node) {
        if(node==NULL) return node;
        dfs(node);
        return mpp[node];
    }
};
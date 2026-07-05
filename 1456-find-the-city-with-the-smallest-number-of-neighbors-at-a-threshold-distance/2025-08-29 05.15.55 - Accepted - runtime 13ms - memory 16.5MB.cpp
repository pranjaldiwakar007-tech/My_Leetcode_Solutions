class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int k) {
//         vector<vector<pair<int,int>>>adj(n);
//         int temp[n]={0};
//         for(int i=0;i<edges.size();i++){
//             int u=edges[i][0];
//             int v=edges[i][1];
//             int w=edges[i][2];
//             int cnt=0;
//           if(w<=k)  {
//             temp[u]=cnt++;
//             adj[u].push_back({v,w});}
//           if(w<=k)  {
//              temp[u]=cnt++;
//              adj[v].push_back({u,w});}
//         }
//         int s=1e8;
// for(it:adj){
//     int ans=it.first;
//     for(auto x:it.second){
//         s=x.size()
//     }
//     int weight=it.third;

// }
// int min_element_index = min_element(temp.begin(), temp.end()) - temp.begin(); 
// return min_element_index
vector<vector<int>>matrix(n,vector<int>(n,1e9));
for(int i=0;i<edges.size();i++){
int u=edges[i][0];
int v=edges[i][1];
int w=edges[i][2];
matrix[u][v]=w;
matrix[v][u]=w;
}
for(int i=0;i<n;i++) matrix[i][i]=0; 
for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][k]==1e9||matrix[k][j]==1e9) continue;
            matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
        }
    }
}
int cntMax=n+1;
int city=-1;
for(int i=0;i<n;i++){
        int cnt=0;
    for(int j=0;j<n;j++){
        if(matrix[i][j]<=k) cnt++;
        }
           if(cnt<=cntMax){
            cntMax=cnt;
            city=i;
    }
}
return city;
    }
};
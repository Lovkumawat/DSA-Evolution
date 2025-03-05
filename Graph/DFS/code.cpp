void DFS(vector<vector<int>>&adj,int node,vector<int>&ans,vector<bool>&visited){
    visited[node]=true;
    ans.push_back(node);
    for(auto neighbour :adj[node]){
        if(!visited[neighbour]){
            DFS(adj,neighbour,ans,visited);
        }
    }
}
vector<int> dfsOfGraph(vector<vector<int>>& adj) {
    int n=adj.size();
    vector<int>ans;
    vector<bool>visited(n+1,false);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            DFS(adj,i,ans,visited);
        }
    }
    return ans;

}
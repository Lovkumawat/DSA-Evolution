vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
    // Code here
    unordered_map<int,list<pair<int,int>>>adj;
    int n=edges.size();
    for(int i=0;i<n;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        int w=edges[i][2];
    
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
        
    }
    set<pair<int,int>>st;
    vector<int>dist(n,INT_MAX);
    dist[src]=0;
    st.insert(make_pair(0,src));
    
    while(!st.empty()){
        auto top=*(st.begin());
        int distnode=top.first;
        int node=top.second;
        st.erase(st.begin());
        for(auto neighbour:adj[node]){
            if(distnode+neighbour.second<dist[neighbour.first]){
                auto record=st.find(make_pair(dist[neighbour.first],neighbour.first));
                if(record!=st.end()){
                    st.erase(record);
                }
                
                dist[neighbour.first]=distnode+neighbour.second;
                st.insert(make_pair(dist[neighbour.first],neighbour.first));
            }
        }
    }
    return dist;
    
}
};
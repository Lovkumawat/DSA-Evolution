vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
    
   
        
     
    vector<int>dist(V,100000000);
    dist[src]=0;
    
   for(int i=0;i<V-1;i++){
       
    for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];
        int w=edge[2];
        
        if(dist[u]!=100000000&&dist[u]+w<dist[v]){
            dist[v]=dist[u]+w;
            
        }
    }
   }
   
   
   bool flag=false;
    for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];
        int w=edge[2];
        
        if(dist[u]!=100000000&&dist[u]+w<dist[v]){
            dist[v]=dist[u]+w;
            flag=true;
        }
        
    }
    
    if(flag==false){
        return dist;
    }else{
        return {-1};
    }
   
   
   
   
   
   
}
};
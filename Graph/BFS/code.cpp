vector<int> bfsOfGraph(vector<vector<int>> &adj) {
    int n=adj.size();
    vector<bool>visited(n+1,false);
    queue<int>q;
    
   
    vector<int>ans;
     q.push(0);
    visited[0]=true;
     while(!q.empty()){
        int front=q.front();
        q.pop();
      
        ans.push_back(front);
        for(auto neighbour:adj[front]){
            if(!visited[neighbour]){
                 q.push(neighbour); 
                   visited[neighbour]=true;
            }
        }
        
    }

      return ans;
}
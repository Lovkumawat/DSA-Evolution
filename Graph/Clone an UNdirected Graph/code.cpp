class Solution {
    public:
    unordered_map<Node*,Node*>hash;
    unordered_map<Node*,bool>vis;
    void build(Node*node){
        if(!node){
            return;
        }
        hash[node]=new Node(node->val);
        vis[node]=false;
        for(auto i:node->neighbors){
            if(hash.find(i)==hash.end()){
                build(i);
            }
        }
    }
    
    void clone(Node*node){
        vis[node]=true;
        for(auto i:node->neighbors){
            hash[node]->neighbors.push_back(hash[i]);
            if(!vis[i]){
                clone(i);
            }
        }
    }
      Node* cloneGraph(Node* node) {
          vector<vector<int>>v;
          build(node);
          clone(node);
          return hash[node];
          
      }
  };
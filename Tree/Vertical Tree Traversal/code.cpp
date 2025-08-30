 vector<vector<int>> verticalOrder(Node *root) {
        // Your code here
         vector<vector<int>>ans;
        map<int,map<int,vector<int>>>node;
        queue<pair<Node*,pair<int,int>>>q;
        q.push(make_pair(root,make_pair(0,0)));
        if(root==NULL){
            return ans;
        }
        while(!q.empty()){
            pair<Node*,pair<int,int>> temp=q.front();
            q.pop();
            Node*FrontNode=temp.first;
            int hd=temp.second.first;
            int lvl=temp.second.second;
            node[hd][lvl].push_back(FrontNode->data);
            if(FrontNode->left){
                 q.push(make_pair(FrontNode->left,make_pair(hd-1,lvl+1)));
            }
            if(FrontNode->right){
                 q.push(make_pair(FrontNode->right,make_pair(hd+1,lvl+1)));
            }
            
        }
       
        for(auto i:node){
              vector<int>temp;
            for(auto j:i.second){
               
                for(auto k:j.second){
                    temp.push_back(k);
                }
             
              
            } 
            ans.push_back(temp);
        }
        return ans;
        
    }
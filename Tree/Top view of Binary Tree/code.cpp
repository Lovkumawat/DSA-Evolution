class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*,int>temp=q.front();
            q.pop();
            Node*frontnode=temp.first;
            
            
        
            int hd=temp.second;
            
            
            if(mp.find(hd)==mp.end()){
                mp[hd]=frontnode->data;
            }
                if(frontnode->left!=NULL){
                    q.push(make_pair(frontnode->left,hd-1));
                }
                if(frontnode->right!=NULL){
                    q.push(make_pair(frontnode->right,hd+1));
                }
                
            }
            
            for(auto it:mp){
                ans.push_back(it.second);
            }
            return ans;
            
            
            

    }
};
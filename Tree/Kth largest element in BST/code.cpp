class Solution {
    public:
    void inorder(Node*root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
        
    }
      int kthLargest(Node *root, int k) {
          vector<int>ans;
          inorder(root,ans);
          int n=ans.size();
          return ans[n-k];
          
      }
  };
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  int solve(Node*root,bool &ans){
      if(root==NULL){
          return 0;
      }
      if(root->left==NULL&&root->right==NULL){
          return root->data;
      }
      
      int left=solve(root->left,ans);
      int right=solve(root->right,ans);
      
      if(root->data==left+right){
          ans=true;
          return ((root->data)+left+right);
      }else{
          ans=false;
          return 0;
      }
      
  }
    bool isSumTree(Node* root) {
        bool ans=true;
        solve(root,ans);
        return ans;
        
    }
};

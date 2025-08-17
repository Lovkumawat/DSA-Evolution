/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void solveleft(Node*root,vector<int>&ans){
      if(root==NULL){
          return;
      }
      
      if(root->left!=NULL){
          ans.push_back(root->data);
          solveleft(root->left,ans);
      }else if(root->left==NULL&&root->right!=NULL){
            ans.push_back(root->data);
          solveleft(root->right,ans);
          
      }else{
          return;
      }
      
  }
  
  void solveleaf(Node*root,vector<int>&ans){
      if(root==NULL){
          return;
      }
      
      solveleaf(root->left,ans);
      
      if(root->left==NULL&&root->right==NULL){
          ans.push_back(root->data);
      }
      solveleaf(root->right,ans);
  }
  void solveright(Node*root,vector<int>&ans){
      if(root==NULL){
          return;
      }
      if(root->right!=NULL){
        solveright(root->right,ans);
      }else if(root->right==NULL&&root->left!=NULL){
          solveright(root->left,ans);
      }else{
          return;
      }
      ans.push_back(root->data);
  }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>ans;
        if(root!=NULL&&(root->left||root->right)){
            ans.push_back(root->data);
        }
        
        solveleft(root->left,ans);
        solveleaf(root,ans);
        solveright(root->right,ans);
        return ans;
    }
};
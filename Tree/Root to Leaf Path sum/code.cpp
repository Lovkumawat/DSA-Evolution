bool solve(Node*root,int target,int sum){
    if(root==NULL){
        return false;
    }
    sum+=root->data;
    if(root->left==NULL&&root->right==NULL){
        if(sum==target){
            return true;
        }
    }
    int leftsum=solve(root->left,target,sum);
    int rightsum=solve(root->right,target,sum);
    return leftsum||rightsum;
    
}
  bool hasPathSum(Node *root, int target) {
      if(root==NULL){
          return false;
      }
      return solve(root,target,0);
  }
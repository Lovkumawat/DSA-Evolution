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

  // APPROACH 2
  class Solution {
  public:
      
      void solve(Node*root,int target,bool &flag){
         if(root==NULL){
                return;
        }
        if(root->left==NULL&&root->right==NULL){
            if(target-root->data==0){
                flag=true;
                return;
            }
        }

      
      solve(root->left,target-root->data,flag);
      solve(root->right,target-root->data,flag);
    
  }
   
    

    bool hasPathSum(Node *root, int target) {
       
        bool flag=false;
        solve(root,target,flag);
        return flag;
        
    }
};
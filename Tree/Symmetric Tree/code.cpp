     if(leftnode==NULL&&rightnode==NULL){
         return true;
     
     }else if((leftnode==NULL&&rightnode!=NULL)||(leftnode!=NULL&&rightnode==NULL)){
          return false;
      }
     
     bool check1=solve(leftnode->left,rightnode->right);
     bool check2=solve(leftnode->right,rightnode->left);
     bool check3=(leftnode->data==rightnode->data);
     if(check1&&check2&&check3){
         return true;
     }else{
         return false;
     }
     
  }
    bool isSymmetric(Node* root) {
       
      if(root==NULL){
          return true;
      }
    return solve(root->left,root->right);
       
        
    }
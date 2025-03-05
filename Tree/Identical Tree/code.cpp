bool solve(Node*r1,Node*r2){
    if(r1==NULL&&r2==NULL){
        return true;
    }
    if(r1!=NULL&&r2!=NULL&&r1->data==r2->data){
      int left=solve(r1->left,r2->left); 
      int right=solve(r1->right,r2->right);
      return left&&right;
    }else{
        return false;
    }
}
bool isIdentical(Node *r1, Node *r2) {
    // Your Code here
    if(r1==NULL&&r2==NULL){
        return true;
    }
    return solve(r1,r2);
}
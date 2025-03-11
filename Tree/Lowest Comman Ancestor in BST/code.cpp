Node* LCA(Node* root, Node* n1, Node* n2) {
    // code here
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1->data||root->data==n2->data){
        return root;
    }
    Node*left=LCA(root->left,n1,n2);
    Node*right=LCA(root->right,n1,n2);
    if(left&&right){
        return root;
    }
    if(left==NULL){
        return right;
    }else{
        return left;
    }
}
class Solution {
  public:
    // Function to delete a node from BST.
    Node*miniVal(Node*root){
        Node*temp=root;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        return temp;
    }
    Node *deleteNode(Node *root, int X) {
        // your code goes here
        if(root==NULL){
            return root;
        }
        
        if(root->data==X){
            if(root->left==NULL&&root->right==NULL){
                delete root;
                return NULL;
            }
            if(root->right==NULL&&root->left!=NULL){
                Node*temp=root->left;
                delete root;
                return temp;
            }
             if(root->right!=NULL&&root->left==NULL){
                Node*temp=root->right;
                delete root;
                return temp;
            }
            if(root->left!=NULL&&root->right!=NULL){
                int mini=miniVal(root->right)->data;
                root->data=mini;
                 root->right= deleteNode(root->right,mini);
            }
            
            
        }
        if(root->data>X){
            root->left=deleteNode(root->left,X);
        }else{
            root->right=deleteNode(root->right,X);
        }
        return root;
    }
};
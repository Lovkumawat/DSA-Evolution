/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Return the root of the modified tree after removing all the half nodes.
class Solution {
  public:
    Node *RemoveHalfNodes(Node *root) {
        // code here
        if(root==NULL){
            return NULL;
        }
        root->left=RemoveHalfNodes(root->left);
        root->right=RemoveHalfNodes(root->right);
        if(root->left!=NULL&&root->right==NULL){
            Node*temp=root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL&&root->left==NULL){
            Node*temp=root->right;
            delete root;
            return temp;
        }
        return root;
        
    }
};
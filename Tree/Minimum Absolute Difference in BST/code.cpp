/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

};
*/

class Solution {
  public:
int checkright(Node* root) {
    if (root->left == NULL) {
        return root->data;
    } else {
        return checkright(root->left); 
    }
}

int checkleft(Node* root) {
    if (root->right == NULL) {
        return root->data;
    } else {
        return checkleft(root->right); 
    }
}
  
     void preorder(Node*root,vector<int>&ans){
         if(root==NULL){
             return;
         }
         int data1;
         if(root->right!=NULL){
             data1=checkright(root->right); 
         }else{
             data1=INT_MAX;
         }
         int data2;
        if(root->left!=NULL){
            data2=checkleft(root->left); 
        }else{
            data2=INT_MAX;
        }
         
         int diff=min(abs(root->data-data1),abs(root->data-data2));
         ans.push_back(diff);
         preorder(root->left,ans);
         preorder(root->right,ans);
     }
     
    int absolute_diff(Node *root) {
        // Your code here
        vector<int>ans;
        preorder(root,ans);
        int diff=INT_MAX;
        for(int i=0;i<ans.size();i++){
            diff=min(diff,ans[i]);
        }
        return diff;
    }
};

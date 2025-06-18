/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        queue<Node*>q;
        q.push(root);
        vector<vector<int>>ans;
        vector<int>temp;
        temp.push_back(root->data);
        ans.push_back(temp);
        while(!q.empty()){
            Node*node=q.front();
            q.pop();
            vector<int>temp;
            if(node->left!=NULL){
                q.push(node->left);
                temp.push_back(node->left->data);
            }
            if(node->right!=NULL){
                q.push(node->right);
                temp.push_back(node->right->data);
            }
            if(temp.size()!=0){
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};
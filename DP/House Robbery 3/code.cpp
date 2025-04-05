/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
    
        int solve(TreeNode*root,unordered_map<TreeNode*,int>&memo){
            if(root==NULL){
                return 0;
            }
            if(memo.find(root)!=memo.end()){
                return memo[root];
            }
    
            int include=root->val;
            if(root->left){
                include+=solve(root->left->left?root->left->left:NULL,memo);
                include+=solve(root->left->right?root->left->right:NULL,memo);
    
            }
            if(root->right){
            include+=solve(root->right->right?root->right->right:NULL,memo);
            include+=solve(root->right->left?root->right->left:NULL,memo);
            }
            int exclude=0;
            if(root->left){
                exclude+=solve(root->left,memo);
            }
            if(root->right){
                exclude+=solve(root->right,memo);
            }
    
            int ans=max(include,exclude);
            return memo[root]=ans;
        }
        int rob(TreeNode* root) {
           
           unordered_map<TreeNode*,int>memo;
            int ans=solve(root,memo);
            return ans;
        }
    };
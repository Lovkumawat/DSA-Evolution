int solve(Node* root) {
    if(root==NULL){
    return 0;
}
int left=solve(root->left);
int right=solve(root->right);
int ans=max(left,right)+1;
return ans;
}

void check(Node* root, int level, int templevel, bool &ans) {
if (root == NULL) {
return;
}
if (root->left == NULL && root->right == NULL) {  
if (templevel != level) {
    ans = false;
}
}

check(root->left, level, templevel + 1, ans);
check(root->right, level, templevel + 1, ans);
}

bool check(Node *root) {
int level = solve(root);

bool ans = true;
check(root, level, 1, ans);
return ans;


}
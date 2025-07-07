class Solution {
  public:
    int position(vector<int>inorder,int element,int size){
        for(int i=0;i<size;i++){
            if(element==inorder[i]){
                return i;
            }
        }
        return -1;
    }
    
    // Function to return a tree created from postorder and inoreder traversals.
    Node*solve(vector<int> inorder, vector<int> postorder,int &postorderindex,int inorderstart,int inorderend,int size){
        if(postorderindex<0||inorderstart>inorderend){
            return NULL;
        }
        int element=postorder[postorderindex];
        int index=position(inorder,element,size);
        Node*root=new Node(element);
        postorderindex--;
        root->right=solve(inorder,postorder,postorderindex,index+1,inorderend,size);
        root->left=solve(inorder,postorder,postorderindex,inorderstart,index-1,size);
        return root;
    }
    
    Node* buildTree(vector<int> inorder, vector<int> postorder) {
        // code here
        int postorderindex=postorder.size()-1;
        int size=inorder.size();
        Node*ans=solve(inorder,postorder,postorderindex,0,size-1,size);
        return ans;
    }
};
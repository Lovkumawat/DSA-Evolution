class Solution {
  public:
    int position(vector<int>& inorder, int inorderstart, int inorderend, int element) {
        for(int i = inorderstart; i <= inorderend; i++) {
            if(element == inorder[i]) {
                return i;
            }
        }
        return -1;
    }
    
    void solve(vector<int>& inorder, vector<int>& preorder, int& index, 
               int inorderstart, int inorderend, int n, vector<int>& ans) {
        
        
        if(index >= n || inorderstart > inorderend) {
            return;
        }
        
        int element = preorder[index];
        index++; 
        
       
      
        if( inorderstart== inorderend) {
            ans.push_back(element);
            return;
        }
         int pos = position(inorder, inorderstart, inorderend, element);
     
       
            solve(inorder, preorder, index, inorderstart, pos - 1, n, ans);
        
        
         
        
            solve(inorder, preorder, index, pos + 1, inorderend, n, ans);
        
    }

  
    vector<int> leafNodes(vector<int>& preorder) {
    vector<int>inorder=preorder;
    sort(inorder.begin(),inorder.end());
   
    int n=preorder.size();
    int preorderindex=0;
    vector<int>ans;
    solve(inorder,preorder,preorderindex,0,n-1,n,ans);
        return ans;
 
    
        
    }
};
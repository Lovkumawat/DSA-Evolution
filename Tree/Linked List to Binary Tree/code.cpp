  class Solution {
  public:


  
    Node *linkedListToBinaryTree(NodeLL *head) {
        // code here
        vector<int>ans;
        NodeLL*curr=head;
        while(curr!=NULL){
            ans.push_back(curr->data);
            curr=curr->next;
        }
        
       
       queue<Node*>q;
        
        int index=0;
        Node*root=new Node(ans[0]);
        q.push(root);
        
        while(!q.empty()&&index<ans.size()){
            Node*temp=q.front();
            q.pop();
            int left=2*index+1;
            if(left<ans.size()){
                temp->left=new Node(ans[left]);
                q.push(temp->left);
            }else{
                temp->left=NULL;
            }
            
            int right=2*index+2;
             if(right<ans.size()){
                temp->right=new Node(ans[right]);
                q.push(temp->right);
            }else{
                temp->right=NULL;
            }
            
            index++;
        }
        
        return root;
    }
};
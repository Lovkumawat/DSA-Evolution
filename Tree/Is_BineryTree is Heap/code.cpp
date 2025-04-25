void CountNode(Node*root,int &countnode){
    if(root==NULL){
        return;
    }
    CountNode(root->left,countnode);
    countnode++;
    CountNode(root->right,countnode);
}
bool CBT(Node*root,int index,int count){
 if(root==NULL){
     return true;
 }   
 if(index>=count){
     return false;
 }else{
  bool left=CBT(root->left,2*index+1,count);
   bool right=CBT(root->right,2*index+2,count);
   return left&&right; 
 }

}
bool MaxHeap(Node*root){
    if(root->left==NULL&&root->right==NULL){
        return true;
    }
    if(root->left!=NULL&&root->right==NULL){
        return root->left->data<root->data;
    }else{
        bool left=MaxHeap(root->left);
        bool right=MaxHeap(root->right);
        return (left&&right&&(root->left->data<root->data)&&root->right->data<root->data);
    }
    
}



  bool isHeap(Node* tree) {
     int countnode=0;
     CountNode(tree,countnode);
     if(CBT(tree,0,countnode)&&MaxHeap(tree)){
         return true;
     }else{
         return false;
     }
      
  }
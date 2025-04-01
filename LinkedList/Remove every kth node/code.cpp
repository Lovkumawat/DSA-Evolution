Node* deleteK(Node* head, int k) {
    Node*ans=head;
    int index=1;
   Node*curr=head;
   Node*prev=NULL;
   Node*next=head;
   while(curr!=NULL){
       
      if(index%k==0){
       next=curr->next;
       prev->next=curr->next;
       curr->next=NULL;
       curr=next;
       index++;
   }else{
       prev=curr;
    //   next=curr->next;
       curr=curr->next;
       index++;
       
   }
   
   }
   return ans;

}
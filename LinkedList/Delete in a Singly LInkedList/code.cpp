class Solution {
    public:
      /* Function to delete a node from a linked list */
      Node* deleteNode(Node* head, int x) {
          if(x==1){
              Node*curr=head->next;
              head->next=NULL;
              head=curr;
              return curr;
          }
          Node*curr1=head;
          Node*curr=head;
          Node*prev=NULL;
          int index=1;
          while(index!=x){
              prev=curr;
              curr=curr->next;
              index++;
              
          }
          prev->next=curr->next;
          curr->next=NULL;
          curr=prev->next;
          return curr1;
          
          
      }
  };
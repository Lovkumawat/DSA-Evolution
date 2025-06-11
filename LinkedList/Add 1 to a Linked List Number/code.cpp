/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node*reverse(Node*head){
      Node*curr=head;
      Node*prev=NULL;
      Node*next=NULL;
      while(curr!=NULL){
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
         
      }
      return prev;
  }
  
    Node* addOne(Node* head) {
      Node*curr=reverse(head);
      Node*ans=new Node(-1);
      Node*temp=ans;
      int carry=1;
      while(curr!=NULL){
          int a=curr->data;
          int data=a+carry;
          int value=data%10;
          carry=data/10;
          Node*newNode=new Node(value);
          temp->next=newNode;
          temp=newNode;
          curr=curr->next;
      }
        if(carry!=0){
          Node*newNode=new Node(carry);
          temp->next=newNode;
          temp=newNode;
      
    }
      return reverse(ans->next);
    }
  
};
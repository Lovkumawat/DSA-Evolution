/* Link list Node
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
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        
        // delete  head
        if(x==1){
            Node*curr=head;
            head=head->next;
            curr->next=NULL;
            delete curr;
            return head;
        }
        // delete last and any middle node
        Node*prev=NULL;
        Node*curr=head;
        Node*ans=curr;
        int index=1;
        while(index!=x){
            index++;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        return ans;
        
        
        
    }
};
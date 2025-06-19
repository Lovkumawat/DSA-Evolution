/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node*slow=head;
        Node*fast=head;
        if(head->next==NULL){
            return 0;
        }
        while(slow&&fast){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast){
                int count=1;
                fast=fast->next;
                while(fast!=slow){
                    fast=fast->next;
                    count++;
                }
                return count;
            }
        }
        return 0;
    }
};
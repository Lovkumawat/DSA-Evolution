/*
Structure of the node of the linked list is as
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
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_map<int,int>mp;
        Node*curr=head1;
        while(curr!=NULL){
            mp[curr->data]=1;
            curr=curr->next;
        }
        curr=head2;
        int count=0;
        while(curr!=NULL){
            
            if(mp[(x-curr->data)]==1){
                mp[(x-curr->data)]=0;
                count++;
            }
            curr=curr->next;
        }
        return count;
    }
};
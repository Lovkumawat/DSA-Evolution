/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
Node* reverse(Node* root) {
    Node* curr = root;
    Node* next = NULL;
    Node* prev = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* addTwoLists(Node* num1, Node* num2) {
    // Convert to long long to handle larger values


  while(num1 && num1->data == 0 ) {
    num1 = num1->next;
}

while(num2 && num2->data == 0 ) {
    num2 = num2->next;
}

    Node*curr1=reverse(num1);
    Node*curr2=reverse(num2);
    int carry=0;
    Node*ans=new Node(-1);
    Node*temp1=ans;
    while(curr1!=NULL&&curr2!=NULL){
        int a=curr1->data;
        int b=curr2->data;
        int data=a+b+carry;
        int value=data%10;
         carry=data/10;
       
        Node*temp=new Node(value);
        temp1->next=temp;
        temp1=temp;
         curr1=curr1->next;
        curr2=curr2->next;
    }
       while(curr1!=NULL){
        int a=curr1->data;
        int data=a+carry;
        int value=data%10;
         carry=data/10;
       
      
        Node*temp=new Node(value);
        temp1->next=temp;
        temp1=temp;
         curr1=curr1->next;
    }
         while(curr2!=NULL){
        int a=curr2->data;
        int data=a+carry;
        int value=data%10;
         carry=data/10;
     
        
        Node*temp=new Node(value);
        temp1->next=temp;
        temp1=temp;
        curr2=curr2->next;
    }
    
           while(carry!=0){
            int digit=carry%10;
            carry=carry/10;
            Node*newNode=new Node(digit);
            temp1->next=newNode;
            temp1=newNode;
        }
    
    

    return reverse(ans->next);
}
};
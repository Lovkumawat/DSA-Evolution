long long multiplyTwoLists(Node *first, Node *second) {
    long long n = 0, m = 0;
 long long mod = 1000000007;  // To prevent overflow in intermediate calculations

 Node *curr1 = first;
 Node *curr2 = second;

 while (curr1 != NULL) {
     n = (n * 10 + curr1->data) % mod;  // Prevent overflow
     curr1 = curr1->next;
 }
 
 while (curr2 != NULL) {
     m = (m * 10 + curr2->data) % mod;  // Prevent overflow
     curr2 = curr2->next;
 }

 return (n * m) % mod;  // Final multiplication under mod
}
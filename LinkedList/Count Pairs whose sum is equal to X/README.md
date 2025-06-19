Given two linked lists head1 and head2 with distinct elements, determine the count of all distinct pairs from both lists whose sum equals the given value x.

Note: A valid pair would be in the form (x, y) where x is from the first linked list and y is from the second linked list. (1, 3) and (3, 1) are considered different.

Examples:

Input: head1 = 1->2->3->4->5->6, head2 = 11->12->13, x = 15

Output: 3
Explanation: There are total 3 pairs whose sum is 15 : (4,11) , (3,12) and (2,13)
Input: head1 = 7->5->1->3, head2 = 3->5->2->8, x = 10

Output: 2
Explanation: There are total 2 pairs whose sum is 10 : (7,3) and (5,5)
Constraints:
1<= size of both LinkedList <=106
1 <= node->data <= 109
1<= x <= 109
Note: All elements in each linked list are unique.
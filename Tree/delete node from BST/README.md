Given a Binary Search Tree and a node value x. Delete the node with the given value x from the BST. If no node with value x exists, then do not make any change. Return the root of the BST after deleting the node with value x.

Note: The generated output will be the inorder traversal of the modified tree.

Examples :

Input: root = [2, 1, 3], x = 12

Output: 1 2 3
Explanation: In the given input there is no node with value 12 , so the tree will remain same.
Input: root = [1, N, 2, N, 8, 5, 11, 4, 7, 9, 12], x = 11

Output: 1 2 4 5 7 8 9 12
Explanation: In the given input, tree after deleting 11 will be

Input: root = [2, 1, 3], x = 3

Output: 1 2
Explanation: In the given input, tree after deleting 3 will be

Constraints:
1 <= n <= 105
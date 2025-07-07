Given inorder and postorder traversals of a binary tree(having n nodes) in the arrays inorder[] and postorder[] respectively. The task is to construct a unique binary tree from these traversals and return its root.
Driver code will print the preorder traversal of the constructed tree.

Note: The inorder and postorder traversals contain unique values, and every value present in the postorder traversal is also found in the inorder traversal.

Examples:

Input: inorder[] = [4, 8, 2, 5, 1, 6, 3, 7], postorder[] = [8, 4, 5, 2, 6, 7, 3, 1]
Output: [1, 2, 4, 8, 5, 3, 6, 7]
Explanation: For the given postorder and inorder traversal of tree the resultant binary tree will be
          1
       /      \
     2        3
   /  \      /  \
  4   5     6    7
   \
    8
Input: inorder[] = [9, 5, 2, 3, 4], postorder[] = [5, 9, 3, 4, 2]
Output: [2, 9, 5, 4, 3]
Explanation: The resultant binary tree will be
           2
        /     \
       9      4
        \     /
         5   3
Constraints:
1 <= number of nodes <= 103
1 <= in[i], post[i] <= 106

Expected Complexities
Time Complexity: O(n)
Auxiliary Space: O(n)
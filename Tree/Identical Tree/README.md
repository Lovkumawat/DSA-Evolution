Given two binary trees with their root nodes r1 and r2, return true if both of them are identical, otherwise, false.

Examples:

Input:
    1          1
   /   \       /   \
  2     3    2    3
Output: true
Explanation: 
There are two trees both having 3 nodes and 2 edges, both trees are identical having the root as 1, left child of 1 is 2 and right child of 1 is 3.
Input:
    1         1
   /   \      /  \
  2     3   3   2
Output: false
Explanation: There are two trees both having 3 nodes and 2 edges, but both trees are not identical.
Input:
    1   1
   /      \
  2        2
Output: false
Explanation: Although both trees have the same node values (1 and 2), they are arranged differently, making the trees non-identical.
Constraints:
1 <= number of nodes <= 105
1 <= node->data <= 109

Thus, the overall time complexity is O(N), where 
𝑁
N is the total number of nodes in the trees.

Space Complexity:
The space complexity is O(H), where 
𝐻
H is the height of the tree.
In the worst case (skewed tree), 
𝐻
=
𝑂
(
𝑁
)
H=O(N), leading to O(N) space complexity.
In the best case (balanced tree), 
𝐻
=
𝑂
(
log
⁡
𝑁
)
H=O(logN), leading to O(\log N) space complexity.
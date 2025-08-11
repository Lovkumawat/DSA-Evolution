Given a binary matrix mat, find out the maximum length of a side of a square sub-matrix with all 1s.

Examples:

Input: mat = [[0, 1, 1, 0, 1], 
              [1, 1, 0, 1, 0],
              [0, 1, 1, 1, 0],
              [1, 1, 1, 1, 0],
              [1, 1, 1, 1, 1],
              [0, 0, 0, 0, 0]]
Output: 3
Explanation: 

The maximum length of a side of the square sub-matrix is 3 where every element is 1.
Input: mat = [[1, 1], 
              [1, 1]]
Output: 2
Explanation: The maximum length of a side of the square sub-matrix is 2. The matrix itself is the maximum sized sub-matrix in this case.
Input: mat = [[0, 0], 
              [0, 0]]
Output: 0
Explanation: There is no 1 in the matrix.
Constraints:
1 ≤ mat.size(), mat[i].size() ≤ 500
0 ≤ mat[i][j] ≤ 1 
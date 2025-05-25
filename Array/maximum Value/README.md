Given an array arr[], choose three distinct indices i, j, and k.
Among all possible such triplets, find the maximum value of the expression:
|aᵢ - aⱼ| + |aⱼ - aₖ| + |aₖ - aᵢ|

Examples:
Input : arr[] = [1, 2, 3]
Output : 4
Explanation : Select index i=0, j=1, k=2
through this: |1-2| + |2-3| + |3-1| = 4, this is the maximum possible value.

Input : arr[] = [1, 6, 5, 2]
Output : 10
Explanation : Select index i=0, j=3, k=1
through this: |1-2| + |2-6| + |6-1| = 10, this is the maximum possible value.

Constraints:
3 <= arr.size() < 10⁵
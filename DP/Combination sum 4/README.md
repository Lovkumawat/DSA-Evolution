Given an array of unique integers arr and a target value k. Return the total number of distinct combinations of elements from nums that sum up to the target. Each element from nums can be used multiple times in a combination. 

Examples :

Input: arr[] = [1, 2, 3], key = 4
Output: 7
Explanation: The possible combination ways to reach the target are: (1, 1, 1, 1) (1, 1, 2) (1, 2, 1) (1, 3) (2, 1, 1) (2, 2) (3, 1).
Note that different sequences of the same numbers are counted as distinct combinations.
Input: arr[] = [9], key = 3
Output: 0
Constraints:
1 ≤ arr.size() ≤ 200
1 ≤ arr[i] ≤ 103
1 ≤ key ≤ 103
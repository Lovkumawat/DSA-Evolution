Given an array arr[] of sorted and distinct positive integers. The task is to find the length of the longest arithmetic progression in a given array.

Note: A sequence seq is an arithmetic progression if seq[i + 1] - seq[i] are all the same value (for 0 <= i < seq.length - 1).

Examples:

Input:arr[] = [1, 7, 10, 13, 14, 19]
Output: 4
Explanation: The longest arithmetic progression is [1, 7, 13, 19].
Input:arr[] = [2, 4, 6, 8, 10]
Output: 5
Explanation: The whole array is in AP.
Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(n2)
Given an array arr[], the task is to find the maximum distance between two occurrences of an element. If no element has two occurrences, then return 0.

Examples:

Input: arr[] = [1, 1, 2, 2, 2, 1]
Output: 5
Explanation: distance for 1 is: 5-0 = 5, distance for 2 is : 4-2 = 2, So max distance is 5.
Input: arr[] = [3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2]
Output: 10
Explanation: maximum distance for 2 is 11-1 = 10, maximum distance for 1 is 4-2 = 2 ,maximum distance for 4 is 10-5 = 5, So max distance is 10.
Input: arr[] = [1, 2, 3, 6, 5, 4]
Output: 0
Explanation: No element has two occurrences, so maximum distance = 0.
Expected Time Complexity :  O(n)
Expected Auxilliary Space : O(n)
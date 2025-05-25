Given three integers a, b, and c, find the minimum non-negative integer x such that:
((a | x) & (b | x)) = c,
where | denotes the Bitwise OR and & denotes the Bitwise AND.

Note: If no such x exists, return -1.

Examples
Input : a = 14, b = 5, c = 6
Output : 2
Explanation : The value of x = 2, the expression ((a | x) & (b | x)) = c is satisfied.

Input : a = 2, b = 3, c = 9
Output : -1
Explanation : No value of x such that ((a | x) & (b | x)) = c is satisfied.
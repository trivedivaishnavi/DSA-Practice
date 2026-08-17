Single Number
Problem

Given a non-empty array of integers nums, every element appears twice except for one element that appears only once.

The task is to find and return that element.

Example
Input:  [4,1,2,1,2]
Output: 4

Here, 1 and 2 appear twice, while 4 appears only once.

Approach

I used the XOR (^) operator to find the element that appears only once.

The main idea is that XOR has some useful properties:

a ^ a = 0
a ^ 0 = a

So, when the same numbers are XORed together, they cancel each other out.

For example:

4 ^ 1 ^ 2 ^ 1 ^ 2

Since:

1 ^ 1 = 0
2 ^ 2 = 0

we are left with:

4 ^ 0 ^ 0 = 4

I start with:

int ans = 0;

Then I XOR every element with ans:

ans = ans ^ nums[i];

All the duplicate elements cancel each other out, leaving only the element that appears once.

Code Logic
ans = 0


ans = ans ^ nums[0]
ans = ans ^ nums[1]
ans = ans ^ nums[2]
...

At the end, ans contains the single element.

Complexity

Time Complexity: O(n)

The array is traversed once.

Space Complexity: O(1)

Only one extra variable ans is used.

Key Takeaway

The important trick here is XOR:

a ^ a = 0
a ^ 0 = a

Therefore, all the duplicate elements cancel out and the number appearing only once remains.

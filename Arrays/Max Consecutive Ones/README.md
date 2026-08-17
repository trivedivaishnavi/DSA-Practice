Find Max Consecutive Ones
Problem

Given a binary array nums, find the maximum number of consecutive 1s in the array.

Example
Input:  [1,1,0,1,1,1]
Output: 3

The longest consecutive sequence of 1s is 1,1,1, which has a length of 3.

Approach

I used two variables:

count → keeps track of the current number of consecutive 1s.
maxi → stores the maximum count found so far.

I traverse the array using a loop.

If the current element is 1, I increment count:

count++;

Then I compare count with maxi and keep whichever is bigger:

maxi = max(maxi, count);

If the current element is 0, the consecutive sequence breaks, so I reset count to 0:

count = 0;

At the end, maxi gives the maximum number of consecutive 1s.

Example Walkthrough

For:

[1, 1, 0, 1, 1, 1]

The count changes like this:

1 → count = 1
1 → count = 2
0 → count = 0
1 → count = 1
1 → count = 2
1 → count = 3

So the answer is:

3
Complexity

Time Complexity: O(n)

We traverse the array once.

Space Complexity: O(1)

Only two variables are used.

Key Takeaway

Keep counting while the elements are 1. Whenever a 0 appears, reset the count. At every 1, update the maximum count found so far.

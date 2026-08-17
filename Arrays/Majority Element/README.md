Maximum Subarray
Problem

Given an integer array nums, find the subarray with the largest sum and return that sum.

Example:

[-2,1,-3,4,-1,2,1,-5,4]


Output: 6

Because:

[4,-1,2,1] = 6
Approach

I used Kadane's Algorithm.

I keep two variables:

sum → stores the current subarray sum.
maxi → stores the maximum sum found so far.

For every element, I add it to sum:

sum += nums[i];

Then I update maxi:

maxi = max(maxi, sum);

If sum becomes negative, I reset it to 0:

if(sum < 0)
    sum = 0;

The idea is that a negative sum will only make the next subarray worse, so it is better to start fresh from the next element.

Example
[-2,1,-3,4,-1,2,1,-5,4]

When we reach:

[4,-1,2,1]

the sum becomes:

4 - 1 + 2 + 1 = 6

So maxi becomes 6.

Complexity

Time: O(n)

Space: O(1)

Key Takeaway

If the current sum becomes negative, discard it and start a new subarray. Keep updating the maximum sum while traversing the array.

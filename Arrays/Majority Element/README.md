Majority Element
Problem

Given an array nums, find the element that appears more than n/2 times.

Example:

[2,2,1,1,1,2,2]


Output: 2

Here, 2 appears more than half of the array.

Approach

I used the Boyer-Moore Voting Algorithm.

I keep two variables:

candidate → stores the current possible majority element.
count → keeps track of its count.

Initially, I take the first element as the candidate:

candidate = nums[0];
count = 1;

Then I traverse the array.

If the current element is the same as the candidate:

count++;

Otherwise:

count--;

The idea is that a majority element appears more than all the other elements combined, so the other elements can be cancelled out.

Whenever count becomes 0, I choose the current element as the new candidate:

candidate = nums[i];
count = 1;

At the end, the remaining candidate is the majority element.

Complexity

Time: O(n)

Space: O(1)

Key Takeaway

The main idea is cancellation — every different element cancels one occurrence of the current candidate. Since the majority element appears more than n/2 times, it will be left as the final candidate.

# Move Zeroes

### Problem

Given an integer array `nums`, move all `0`s to the end of the array while maintaining the relative order of the non-zero elements.

Example:

[0,1,0,3,12]

→ [1,3,12,0,0]

### Approach

I used an `insertPosition` pointer to keep track of where the next non-zero element should be placed.

I traverse the array using `i`.

Whenever I find a non-zero element:

```cpp
nums[insertPosition] = nums[i];
insertPosition++;

Sort Colors
Problem

Given an array containing only 0, 1, and 2, sort the array in-place.

Example:

[2,0,2,1,1,0]


→


[0,0,1,1,2,2]
Approach

I used three pointers:

i → keeps track of where 0 should go.
j → checks the current element.
k → keeps track of where 2 should go.

Initially:

i = 0;
j = 0;
k = n - 1;

I keep checking nums[j].

If it is 1, it is already in the correct place, so:

j++;

If it is 2, I swap it with the element at k and decrease k:

swap(nums[j], nums[k]);
k--;

I don't increase j here because the new element that came to j still needs to be checked.

If it is 0, I swap it with the element at i and move both i and j forward:

swap(nums[j], nums[i]);
i++;
j++;
Complexity

Time: O(n)

Space: O(1)

Key Takeaway

The main idea is to keep 0s on the left, 1s in the middle, and 2s on the right using three pointers.

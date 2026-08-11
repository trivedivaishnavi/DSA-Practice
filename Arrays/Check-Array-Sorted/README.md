# Check if Array is Sorted II

### Problem

Check whether the array is sorted in non-decreasing order after possibly being rotated.

### Approach

I used the idea of counting how many times the order breaks.

For every element, I compare it with the next element:

```text
nums[i] > nums[(i + 1) % n]
```

If this happens more than once, the array cannot be sorted after rotation.

The `% n` is important because it also compares the **last element with the first element**.

### Example

```text
nums = [3, 4, 5, 1, 2]

3 > 4 → No
4 > 5 → No
5 > 1 → Yes
1 > 2 → No
2 > 3 → No

Only one break → valid sorted rotated array
```

### Complexity

* Time: O(n)
* Space: O(1)

### Key Idea

A sorted rotated array can have **at most one place where the order decreases**.

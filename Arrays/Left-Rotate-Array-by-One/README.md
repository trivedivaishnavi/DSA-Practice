# Rotate Array

### Problem

Given an array `nums`, rotate the array to the left by one position.

For example:

```text
[1, 2, 3, 4, 5]
```

becomes:

```text
[2, 3, 4, 5, 1]
```

### Approach

I first store the **first element** in a temporary variable because it will be overwritten while shifting the other elements.

```text
first = nums[0]
```

Then I shift every element one position to the left:

```text
nums[i - 1] = nums[i]
```

After the shifting is complete, I put the stored first element at the last position:

```text
nums[n - 1] = first
```

So the array gets rotated by one position without using another array.

### Example

```text
nums = [1, 2, 3, 4, 5]

first = 1

After shifting:
[2, 3, 4, 5, 5]

Put first at the end:
[2, 3, 4, 5, 1]
```

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Key Takeaway

Store the first element, shift the remaining elements one position to the left, and finally put the stored element at the end.

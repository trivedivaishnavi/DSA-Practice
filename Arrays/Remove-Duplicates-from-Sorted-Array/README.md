# Remove Duplicates from Sorted Array

### Problem

Given a sorted array, remove the duplicates in-place so that every element appears only once and return the number of unique elements.

### Approach

Since the array is already sorted, duplicate elements will be next to each other.

I used two pointers:

* `i` points to the position of the last unique element.
* `j` moves through the array and checks for the next unique element.

If `nums[i]` and `nums[j]` are different, it means we found a new unique element.

So I put it at the next position:

```text
nums[i + 1] = nums[j]
```

and then increment `i`.

At the end, `i + 1` gives the number of unique elements.

### Example

```text
nums = [1, 1, 2, 2, 3]

After removing duplicates:

[1, 2, 3, _, _]

Return → 3
```

### Complexity

* Time: O(n)
* Space: O(1)

### Key Idea

Because the array is sorted, I can compare the current element with the last unique element and place every new unique element at the next position.

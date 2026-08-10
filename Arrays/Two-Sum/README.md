# Two Sum

### Problem

We have an array `nums` and a `target`. We need to find the indices of two numbers whose sum is equal to the target.

### Approach

Initially, I thought of using two loops and checking every pair, but that would take **O(n²)** time.

So instead, I used a **hash map**.

For every element, I calculate:

`target - nums[i]`

This gives me the number that I need to find.

* If that number is already present in the map, I found the answer.
* Otherwise, I store the current number and its index in the map.

### Example

```text
nums = [2, 7, 11, 15]
target = 9

For 2:
9 - 2 = 7
7 is not present → store 2

For 7:
9 - 7 = 2
2 is already present → found the pair

Answer = [0, 1]
```

### Complexity

* Time: **O(n)**
* Space: **O(n)**

### Key Idea

Instead of checking every pair, I check whether the **required complement** has already been seen.

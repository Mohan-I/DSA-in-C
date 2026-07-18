/*
53. Maximum Subarray

Solved - Medium

Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/ 

#define MAX(a, b) ((a) > (b) ? (a) : (b)) 

int maxSubArray(int* nums, int numsSize) {
    int max_ends_here = nums[0];
    int max_so_far = nums[0];

    for(int i = 1; i < numsSize; i++){
        max_ends_here = MAX(nums[i], max_ends_here + nums[i]);
        max_so_far = MAX(max_ends_here, max_so_far);
    }

    return max_so_far;
}

/* 
Explaination

That is the exact piece of logic that trips almost everyone up when they first see Kadane’s algorithm! It feels like resetting `max_ending_here` throws away valuable data, but it doesn't.

The secret lies in the division of labor between our two variables:

1. **`max_ending_here`** lives purely in the *present*. It only cares about the best subarray ending at the current index. It resets frequently.
2. **`max_so_far`** is our *history bank*. Before `max_ending_here` resets, `max_so_far` has already locked in and saved the highest peak ever reached.

Let's walk step-by-step through your exact array: `{-2, -3, 4, -1, -2, 1, 5, -3}`

---

### Step-by-Step Execution

* **Initialization:**
`max_ending_here = -2`, `max_so_far = -2`
* **Index 1 (Element = `-3`):**
`max_ending_here = max(-3, -2 + -3)` $\rightarrow$ **`-3`**
* *Why?* Starting fresh at `-3` is better than adding it to `-2` (which makes `-5`).
* `max_so_far = max(-2, -3)` $\rightarrow$ **`-2`**


* **Index 2 (Element = `4`):**
`max_ending_here = max(4, -3 + 4)` $\rightarrow$ **`4`**
* *Why?* The running sum was negative (`-3`), so adding it to `4` only drags `4` down to `1`. The algorithm decides to **reset** the running chain here and start a fresh subarray at `4`.
* `max_so_far = max(-2, 4)` $\rightarrow$ **`4`** *(History bank records the new peak!)*


* **Index 3 (Element = `-1`):**
`max_ending_here = max(-1, 4 + -1)` $\rightarrow$ **`3`**
* *Why?* Even though `-1` decreases our value, extending the chain (`3`) is still better than starting fresh at `-1`.
* `max_so_far = max(4, 3)` $\rightarrow$ **`4`** *(History bank safely keeps our peak of 4)*


* **Index 4 (Element = `-2`):**
`max_ending_here = max(-2, 3 + -2)` $\rightarrow$ **`1`**
* `max_so_far = max(4, 1)` $\rightarrow$ **`4`**


* **Index 5 (Element = `1`):**
`max_ending_here = max(1, 1 + 1)` $\rightarrow$ **`2`**
* `max_so_far = max(4, 2)` $\rightarrow$ **`4`**


* **Index 6 (Element = `5`):**
`max_ending_here = max(5, 2 + 5)` $\rightarrow$ **`7`**
* `max_so_far = max(4, 7)` $\rightarrow$ **`7`** *(History bank updates to 7!)*


* **Index 7 (Element = `-3`):**
`max_ending_here = max(-3, 7 + -3)` $\rightarrow$ **`4`**
* `max_so_far = max(7, 4)` $\rightarrow$ **`7`**
---

### The Takeaway

When the algorithm reached **Index 2 (value `4`)**, it completely reset `max_ending_here` to `4`, effectively "forgetting" the previous elements (`-2, -3`).
Why was this safe? Because those previous elements only summed up to a negative value. Any future subarray would only be ruined by joining them. By resetting, the algorithm positioned itself to build the next massive chain (`4, -1, -2, 1, 5`), which eventually peaked at **`7`**.
*/
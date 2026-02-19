// Boyer-Moore Voting Algorithm

#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        // If the current kingdom has no soldiers, the next person takes over
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } 
        // If the next person is from the same kingdom, add a soldier
        else if (nums[i] == candidate) {
            count++;
        } 
        // If they are from a different kingdom, they cancel each other out
        else {
            count--;
        }
    }

    return candidate;
}

int main(){
    int nums[] = {2,7,1,3,7,7,3,2,3,9,8,9,9,8,7,9,9,9,3,1,8,9,7,9,8,2,9,9,7,3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int output = majorityElement(nums, size);

    printf("Majorly Occured Element : %d", output);
    return 0;
}

/**

THEROTICAL UNDERSTANDING: -

My way of solving problem:

int majorityElement(int* nums, int numsSize) {
int mx_count = nums[0], nw_count = 1;
    for(int i = 0; i < numsSize; i++){
        int count = 0, j = i + 1;

        if(j < numsSize){
            if(nums[i] == nums[j]){
                count++;
            }

            if(nw_count < count){
                nw_count = count;
                mx_count = nums[i];
            }
            j++;
        }
    }
    return mx_count;
}

I love your intuition here—you’re trying to track the "reign" of a number by counting its occurrences. However, your current code only compares neighbors (`nums[i]` vs `nums[j]`) and resets every time. If the majority element is spread out (e.g., `[2, 1, 2, 1, 2]`), your code won't "remember" the previous counts.

Since you're on a 6-month track to mastering DSA, this is the perfect time to introduce you to one of the most elegant "Expert" algorithms: **Boyer-Moore Voting Algorithm**.

---

### 1. How Beginners vs. Experts Think

* **Beginners:** "I'll count every number and see which one is biggest." (This usually requires a Hash Map or sorting, which takes extra time or memory).
* **Experts:** "If a number appears more than half the time, it can 'outvote' all other numbers combined."

### 2. The Analogy: The "Last Man Standing" Battle
Imagine the array is a battlefield of different kingdoms (numbers).

1. The first number becomes the **Leader**. He has 1 soldier (count = 1).
2. If the next number is from the **same** kingdom, the Leader gets another soldier (count++).
3. If the next number is from a **different** kingdom, they fight and both die (count--).
4. If the count hits 0, the current Leader is gone, and the **next** number encountered becomes the new Leader.

Because the Majority Element appears **more than ** times, it is guaranteed to be the "Last Man Standing."

---

### 3. The Professional Solution (C)
This algorithm runs in  time (one pass) and  space (no extra arrays).

```c
int majorityElement(int* nums, int numsSize) {
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        // If the current kingdom has no soldiers, the next person takes over
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } 
        // If the next person is from the same kingdom, add a soldier
        else if (nums[i] == candidate) {
            count++;
        } 
        // If they are from a different kingdom, they cancel each other out
        else {
            count--;
        }
    }

    return candidate;
}

```

---

### 4. Why your previous code didn't work
Your code used `j = i + 1`, which only looks one step ahead. If you have `[3, 2, 3]`:
1. At `i=0`, it compares 3 and 2. They aren't equal.
2. At `i=1`, it compares 2 and 3. They aren't equal.
3. The "3"s are never counted together because they aren't neighbors.

### 5. Real-World Use
Experts use Boyer-Moore in **Streaming Data**. Imagine a high-traffic router checking which IP address is sending the most packets. You can't store millions of IPs in memory, but you *can* store one "candidate" and one "counter" to find the heavy hitter instantly.

---

### Your Roadmap Check-in
You’ve just moved from **Two-Pointers** (Remove Duplicates) to **Greedy/Voting Algorithms**.
**How to measure improvement:** Can you trace `[2, 2, 1, 1, 1, 2, 2]` using the "Soldier" analogy in your head? If you can see why `2` wins even though the `1`s tried to fight back in the middle, you've mastered the logic.


VISUALIZATION

It is a bit mind-blowing at first because we aren't actually "counting" every number like a tally sheet. 
Instead, we are using **Elimination**. The "Secret Sauce" of this algorithm is the problem's rule: 
**The majority element appears more than  times.** This means it appears more often than *all other numbers combined*.

### The "Bar Fight" Analogy

Imagine a room with 10 people. 6 belong to **Team A**, and 4 belong to **other random teams** (B, C, D).

1. If every time a Team A person walks up to a non-Team A person, they both leave the room...
2. After 4 pairs leave (8 people total), there will still be **2 people from Team A** left standing.
3. Because Team A had more than half, they literally cannot be fully eliminated by the minority.

### Let's Trace it Step-by-Step

Input: `[2, 2, 1, 1, 1, 2, 2]` (Total size = 7. Majority must be > 3.5, so at least 4).

| Step | Num   | Candidate | Count | Logic |
| ---  | ---   | --- | --- | ---   |
| 1    | **2** | 2         | 1     | No one was there; 2 takes the lead. |
| 2    | **2** | 2         | 2     | Another 2! The "throne" is stronger. |
| 3    | **1** | 2         | 1     | A challenger (1) appears! He fights a 2; both "die" (Count drops). |
| 4    | **1** | 2         | 0     | Another challenger (1) fights the last 2; both "die". **Count is 0.** |
| 5    | **1** | 1         | 1     | The throne was empty. 1 takes over. |
| 6    | **2** | 1         | 0     | A 2 fights the 1. Both "die". **Count is 0.** |
| 7    | **2** | 2         | 1     | The throne was empty. 2 takes over. |

### Wait, why is the answer 2?
In the trace above, at the very last step, the candidate was **2**.
Even though "1" held the throne for a moment, it didn't have the "stamina" (the numbers) to stay there because the "2"s kept coming back to knock it off. 
Because "2" appears more than half the time, it is mathematically impossible for it to be wiped out by the end of the array.

### Why Beginners Waste Time
Beginners try to keep a "Top 3" list or a "Max Count" variable.
* **The Rookie way:** "Is 2 the max? Let me check. Is 1 the max? Let me check."
* **The Pro way:** "I don't care who is winning *right now*; I just know that the Majority Element will be the only one left after everyone else cancels each other out."

---

### How to verify you've got it

Try to run the logic on `[1, 2, 1]`.

1. Candidate = 1, Count = 1.
2. Challenger = 2, Count = 0 (1 and 2 cancel out).
3. Candidate = 1, Count = 1.
**Result: 1.** (Which is correct!)

/ 
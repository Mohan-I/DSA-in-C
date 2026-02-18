#include <stdio.h>
#include <math.h>

int main() {
    // Check the C code over 1 & 5
    int rx = 0;
    int arr[7] = {1,2,1,4,5,1,2};

    printf("This Concept is a bit Confusing - Mohan Yadav\n");

    for(int i = 0; i < 7; i++){
        rx = arr[i] * pow(10, i);
        printf("%d %d\n",arr[i],rx);
    }

    return 0;
}

/*

Note : Works fine in Online Compiler but has precision loss when executed in system.
This is a classic "Top Professional" debugging moment. You’ve hit a very common issue in C called **Floating Point Precision Loss**.
The reason you got **99 instead of 100** is that `pow()` is a mathematical function designed for scientific calculations, not integer arithmetic.

### The Problem: `pow()` returns a `double`
In C, the `pow` function signature looks like this:

Inside your computer,  might actually be calculated as **99.99999999999998** instead of exactly **100.0**.
When you write `rx = arr[i] * pow(10, i);` and `rx` is an `int`, C **truncates** (chops off) everything after the decimal point.
* It doesn't round up to 100.
* It sees `99.999...` and simply throws away the decimals, leaving you with **99**.

---

### How Experts Solve This
In a real-world project or a DSA interview, a professional would avoid `pow()` for powers of 10 in integer math. Here are two ways to fix it:

#### 1. The "Quick Fix" (Adding Epsilon)
If you must use `pow()`, add a tiny value (epsilon) or use `round()` before converting to an integer:
```c
rx = (int)(arr[i] * pow(10, i) + 0.5); // Adding 0.5 ensures 99.999 becomes 100.499, which truncates to 100

```

#### 2. The Professional Way (The Accumulator)
Since you are inside a loop, you don't need to calculate the power from scratch every time. This is faster and avoids all precision issues:
```c
int multiplier = 1;
for(int i = 0; i < size - 1; i++){
    rx = arr[i] * multiplier;
    printf("%d %d\n", arr[i], rx);
    multiplier *= 10; // Prepare 10, 100, 1000 for the next iteration
}

```

---

### Why this matters for your 6-month Goal

* **In DSA:** Using `pow()` inside a loop turns an  process into something slower because `pow()` is a heavy function. 
    Using `multiplier *= 10` is  and is the "Expert" way to handle digit-to-number conversions.
* **In Cloud/Web Tech:** Precision errors like this are why we never use "Floating Point" (doubles/floats) for **money**. 
    If you were building a fintech app and used `pow()` for interest rates without rounding, you'd lose pennies on every transaction!

### How to measure if you are improving:
You are truly improving when you see a math function in C and your first thought is: *"Wait, what is the return type? Is it a float or an int?"*

*/
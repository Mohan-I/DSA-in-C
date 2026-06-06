#include <stdio.h>

struct Example {
  char a;   // 1 byte
  int b;    // 4 bytes
  char c;   // 1 byte
};

int main() {
  printf("Size of struct: %zu bytes\n", sizeof(struct Example));
  return 0;
}

/*

EXPLANATION :

Ah, the classic structure padding mystery! If you simply add up the sizes of the individual members ($1 \text{ byte} + 4 \text{ bytes} + 1 \text{ byte}$), you logically expect the total size to be 6 bytes.

However, your output says 12 bytes because the CPU doesn't read memory one byte at a time. It reads memory in larger chunks (usually 4 or 8 bytes at a time, known as a word). To make memory access as fast as possible, the compiler performs Structure Padding alignment.

Here is exactly how the compiler lays out your struct in memory to hit that 12-byte mark:

---

## The Memory Layout Breakdown

CPUs like 4-byte integers to start at a memory address that is a multiple of 4. This is called alignment. To achieve this, the compiler inserts invisible, empty bytes called padding.

Here is what happens inside `struct Example`:

| Byte Offset   | Member    | Size      | Description               |
| ---           | ---       | ---       | ---                       |
| Byte 0        | `char a`  | 1 byte    | Placed at the very beginning. |
| Bytes 1 - 3   | *Padding* | 3 bytes   | Inserted by compiler. This ensures `int b` starts exactly at a multiple of 4 (Byte 4). |
| Bytes 4 - 7   | `int b`   | 4 bytes   | Perfectly aligned across 4 bytes. |
| Byte 8        | `char c`  | 1 byte    | Placed immediately after `int b`. |
| Bytes 9 - 11  | *Padding* | 3 bytes   | Inserted by compiler. The total size of a struct must be a multiple of its largest member's alignment requirement (which is 4 bytes for `int b`). To round up from 9 to the next multiple of 4, 3 padding bytes are added at the end. |

Totaling them up: $1 \text{ (a)} + 3 \text{ (pad)} + 4 \text{ (b)} + 1 \text{ (c)} + 3 \text{ (pad)} = \mathbf{12\text{ bytes}}$.

---

## How to Fix It (Reduce Size to 8 Bytes)

You can save a lot of memory simply by rearranging the order of your struct members from largest to smallest. This allows the smaller data types to tightly pack into the empty gaps naturally.

------------------------------------------------------------------------c
struct OptimizedExample {
  int b;  // 4 bytes - Placed first
  char a; // 1 byte  - Placed next
  char c; // 1 byte  - Placed right next to 'a'
};

------------------------------------------------------------------------

### The Optimized Memory Layout:

* Bytes 0 - 3: `int b` (4 bytes)
* Byte 4: `char a` (1 byte)
* Byte 5: `char c` (1 byte)
* Bytes 6 - 7: *Padding* (2 bytes) $\rightarrow$ Added at the very end to round the total struct size up to a multiple of 4 (8 bytes).

By changing the order, `sizeof(struct OptimizedExample)` drops down to 8 bytes, saving you 4 bytes of wasted padding!
*/


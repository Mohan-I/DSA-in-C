#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("MEMORY ALLOCATION THROUGH MALLOC\n");
    // 
    int *ptr = (int *) malloc(sizeof(int) * 5);

    if(ptr[0] == NULL){
        printf("The Memory Allocation has been failed !\n");
        exit(0);
    }

    for(int i = 0; i < 5; i++){
    ptr[i] = i + 1;
    }

    for(int i = 0; i < 5; i++){
      printf("-=[%d]=-",ptr[i]);
    }

    return 0;
}

// 

/*
Here is the breakdown of what is happening, piece by piece:

1. malloc(...)
The malloc (memory allocation) function searches the Heap (a large pool of available RAM) for a contiguous block of memory. 
It returns the starting address of that block.

2. sizeof(int) * 5
This calculates exactly how many bytes you need.
sizeof(int): Tells the computer how many bytes a single integer occupies (usually 4 bytes on modern systems).
* 5: Multiplies that size to fit five integers.
Total: You are requesting a block of 20 bytes. i.e malloc(20)

3. (int *)
This is a type cast. malloc is generic; it returns a "pointer to anything" (void *).
The (int *) tells the compiler: "Treat this block of memory as a sequence of integers."
- The * (The Pointer): This tells the computer that we aren't dealing with a regular number (like 5 or 10), but with a memory address (a location in the computer's RAM).
- The int (The Type): This tells the computer how to read the data at that address. It says, "The data at this location should be treated as an integer."
- The Parentheses () (The Cast): Putting it all in parentheses is how we "cast" or "force" the data to be seen as a specific type

4. int *ptr
This declares a pointer variable named ptr. It stores the memory address of the very first byte of the allocated block.
*/
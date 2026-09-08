#include <stdio.h>
#include <omp.h>

int main()
{
    #pragma omp parallel
    {
        // Use critical section to prevent interleaved output
        #pragma omp critical
        {
            printf("The Thread that is currently being executed: %d\n", omp_get_thread_num());
        }
    }

    return 0;
}


// 
/*

### What are POSIX Standards?

**POSIX** stands for **Portable Operating System Interface**. It is a family of standards specified by the IEEE (Institute of Electrical and Electronics Engineers) to maintain compatibility between operating systems.

POSIX defines:

* **System Call APIs:** Standard C functions for working with files, processes, memory, and threads (e.g., `pthreads`).
* **Standard I/O Safety Guarantees:** Rules for how system functions behave in multi-threaded environments.
* **Shell & Utilities:** Standardized command-line tools across Unix-like platforms (Linux, macOS, BSD).

By adhering to POSIX standards, C code written for Linux will compile and run on macOS or BSD with minimal changes.

---

### Why do you need `#pragma omp critical` for `printf`?

Under POSIX standards, standard C library I/O functions like `printf` are required to be **thread-safe**. This means calling `printf` from multiple threads simultaneously will **not crash** or corrupt the internal buffer of `stdout`.

However, **thread-safety is not the same as thread ordering.** Here is why you still need `#pragma omp critical`:

#### 1. POSIX Locks Internal Buffers, Not Visual Output Lines

When a thread calls `printf`, POSIX locks `stdout` internally for individual internal operations, writes the data, and releases the lock.
If Thread 0 prints `"The Thread... 0\n"` and Thread 1 prints `"The Thread... 1\n"` at the exact same instant, POSIX guarantees the internal buffer won't corrupt. However, without explicit external synchronization, the runtime context switches can cause character-level or line-level interleaving:

```text
// Without critical section (Unordered interleaving):
The Thread that is currently The Thread that is currently being Executed : 1
being Executed : 0

```

#### 2. Deterministic vs. Non-Deterministic Order

Even if `printf` flushes whole lines smoothly, POSIX does **not** guarantee which thread executes first. Threads are scheduled by the operating system kernel asynchronously.

If you want:

* **Guaranteed line isolation:** `#pragma omp critical` forces every thread to wait its turn so the complete string and `\n` finish printing cleanly as a single unit.
* **Deterministic order:** You would need `#pragma omp ordered` inside a loop or explicit barrier control.

---

### Comparison of Execution Behavior

| Directity / Approach      | Thread Safety (No Crashes)   | Clean Un-interleaved Lines | Sequential Execution Order |
| ---                       | ---                          | ---                        | ---                        |
| Plain `printf`            | ✅                           | ❌ (Can interleave)       | ❌ (Random order) |
| `#pragma omp critical`    | ✅                           | ✅ (Clean output)         | ❌ (Random order) |
| `#pragma omp ordered`     | ✅                           | ✅ (Clean output)         | ✅ (0, 1, 2, 3...) |
The 'X' in POSIX stands for UNIX.

When Richard Stallman (founder of the Free Software Foundation) suggested the acronym to IEEE in 1988:

Portable

Operating

System

Interface

X — added because the suffix X is traditionally used in UNIX-like operating system names (such as UNIX, Linux, AIX, HP-UX, POSIX).

It was intentionally designed so that the acronym was easy to pronounce and sounded like UNIX while denoting a standardized open interface.

The error happens because the GCC compiler needs an explicit flag to enable OpenMP support during linking. Without it, the linker cannot find the implementation of `omp_get_thread_num`.

To fix this, add the `-fopenmp` flag to your GCC command:

```powershell
gcc -fopenmp '.\Basic Arch.c' -o basic_arch

```

---

### Why this happens

* `#include <omp.h>` only provides function **declarations** so your code compiles into an object file (`.o`).
* The **linker** step requires `-fopenmp` to link the OpenMP runtime library (`libgomp`), where functions like `omp_get_thread_num()` are actually implemented.

---

### Running the Program

1. **Compile:**
```powershell
gcc -fopenmp '.\Basic Arch.c' -o basic_arch

```


2. **Execute:**
```powershell
.\basic_arch.exe

```



*(Optional)* To set the number of threads dynamically in PowerShell before running, use:

```powershell
$env:OMP_NUM_THREADS=4
.\basic_arch.exe

```

Switch to MSYS2 / MinGW-w64 (Recommended Solution)
Modern OpenMP support on Windows requires MinGW-w64 (which includes native pthreads support).

Download and install MSYS2 or a modern MinGW-w64 toolchain (via WinLibs or standalone MinGW-w64).

Install GCC via MSYS2 terminal:

Bash
pacman -S mingw-w64-ucrt-x86_64-gcc
Update your Windows Environment Path (C:\msys64\ucrt64\bin) to use the new compiler.
*/ 


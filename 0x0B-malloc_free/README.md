# 0x0B. C - malloc, free

This repository contains solutions for various tasks related to dynamic memory allocation in C, using `malloc` and `free` functions. Here, we will discuss the difference between automatic and dynamic allocation, explain what `malloc` and `free` are, how to use them, and provide a guide on using Valgrind to check for memory leaks.

## Difference between Automatic and Dynamic Allocation
In C, memory can be allocated in two ways: automatic allocation and dynamic allocation.

- **Automatic Allocation**: Automatic allocation is done for variables declared within a function or a block. Memory for these variables is automatically allocated when the function or block is entered and deallocated when it is exited. This type of allocation is managed by the compiler.

- **Dynamic Allocation**: Dynamic allocation refers to the process of allocating memory during program execution. The memory is allocated on the heap, and the allocation and deallocation are done explicitly using functions like `malloc` and `free`. This allows for more flexibility in managing memory and enables us to allocate memory for data structures whose size is determined at runtime.

## `malloc` and `free`
- **`malloc`**: `malloc` is a function in the C standard library used for dynamic memory allocation. It stands for "memory allocation." It is used to allocate a specific amount of memory on the heap and returns a pointer to the allocated memory. The syntax for `malloc` is as follows:

  ```c
  void *malloc(size_t size);
  ```

  Here, `size` represents the number of bytes to be allocated. The returned pointer should be explicitly cast to the desired type.

- **`free`**: `free` is a function used to deallocate the memory previously allocated by `malloc`. It frees up the memory on the heap, making it available for future use. The syntax for `free` is as follows:

  ```c
  void free(void *ptr);
  ```

  Here, `ptr` is a pointer to the memory block to be deallocated.

## How to Use `malloc` and `free`
To use `malloc` and `free`, follow these steps:

1. Include the necessary header file:
   ```c
   #include <stdlib.h>
   ```

2. Allocate memory using `malloc`:
   ```c
   // Allocate memory for an integer
   int *ptr = (int *)malloc(sizeof(int));
   ```

   Here, we allocate memory for an integer and assign the returned pointer to `ptr`. The `sizeof` operator is used to determine the size of the type.

3. Use the allocated memory as needed:
   ```c
   *ptr = 42; // Assign a value to the allocated memory
   ```

4. Deallocate the memory using `free` when it is no longer needed:
   ```c
   free(ptr);
   ```

   It is essential to release the allocated memory to avoid memory leaks.

## Why and When to Use `malloc`
We use `malloc` when we need to allocate memory for data structures whose size is determined at runtime or when we require a large amount of memory. Dynamic allocation enables us to allocate memory on-demand and release it when it is no longer needed, improving memory management and avoiding unnecessary memory consumption.

Some situations where `malloc` is commonly used include:

- Allocating memory for arrays.
- Creating dynamic data structures like linked lists, trees, or graphs.
- Dynamically resizing arrays or buffers.
- Reading and storing data from external sources whose size is not known in advance.

## Using Valgrind to Check for Memory Leaks
Valgrind is a powerful tool for debugging and profiling on Linux systems. It can detect memory leaks, uninitialized memory access, and other memory-related errors.

To use Valgrind to check for memory leaks, follow these steps:

1. Install Valgrind on your system if it is not already installed.

2. Compile your C program with debugging symbols:
   ```bash
   gcc -g -o program program.c
   ```

3. Run your program with Valgrind:
   ```bash
   valgrind --leak-check=full ./program
   ```

   Valgrind will analyze your program's memory usage and report any memory leaks or errors it detects.

4. Analyze the Valgrind output to identify and fix memory leaks or other memory-related issues.

   Valgrind will provide detailed information about the source file, line numbers, and stack traces where memory leaks or errors occur. Use this information to locate and fix the issues.

Remember to recompile your program without the `-g` flag when you are done debugging with Valgrind.

---

With this knowledge, you should be able to understand the difference between automatic and dynamic allocation, use `malloc` and `free` to allocate and deallocate memory dynamically, and utilize Valgrind to check for memory leaks in your C programs. Happy coding!

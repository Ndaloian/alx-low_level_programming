# 0x0F. C - Function Pointers

This repository contains examples and explanations of function pointers in the C programming language.

## Table of Contents

1. [Introduction](#introduction)
2. [What are Function Pointers?](#what-are-function-pointers)
3. [How to Use Function Pointers](#how-to-use-function-pointers)
4. [What Does a Function Pointer Hold?](#what-does-a-function-pointer-hold)
5. [Where Does a Function Pointer Point to in Virtual Memory?](#where-does-a-function-pointer-point-to-in-virtual-memory)

## Introduction

Function pointers are a powerful feature in the C programming language that allow you to store and manipulate pointers to functions. They provide a way to treat functions as data, enabling dynamic behavior and flexibility in program execution.

This readme file aims to explain what function pointers are, how to use them, what they hold, and where they point to in virtual memory.

## What are Function Pointers?

In C, functions are essentially blocks of code with a unique address in memory. Function pointers are variables that hold the memory addresses of functions. They provide a way to refer to functions by their addresses and allow indirect invocation of functions.

Function pointers enable various advanced programming techniques such as callbacks, dynamic dispatch, and implementing data structures like function tables or function arrays.

## How to Use Function Pointers

To use function pointers, you need to follow these steps:

1. Declare a function pointer variable with the appropriate function signature.
2. Assign the address of a compatible function to the function pointer.
3. Use the function pointer to call the function indirectly.

Here's an example that demonstrates the usage of function pointers:

```c
#include <stdio.h>

void sayHello() {
    printf("Hello, World!\n");
}

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    void (*functionPtr)(); // Declare a function pointer

    functionPtr = sayHello; // Assign the address of sayHello function
    functionPtr(); // Call the function indirectly

    int (*addPtr)(int, int); // Declare a function pointer with parameters

    addPtr = addNumbers; // Assign the address of addNumbers function
    int sum = addPtr(3, 5); // Call the function indirectly
    printf("Sum: %d\n", sum);

    return 0;
}
```

In this example, we declare two function pointers: `functionPtr` and `addPtr`. We assign the addresses of the `sayHello` and `addNumbers` functions to the respective function pointers. Finally, we use the function pointers to call the functions indirectly.

## What Does a Function Pointer Hold?

A function pointer holds the memory address of a function. It points to the entry point of the function in memory. Function pointers have a specific function signature associated with them, which determines the type of function it can point to.

For example, a function pointer with the signature `int (*)(int, int)` can point to a function that takes two `int` arguments and returns an `int` value.

## Where Does a Function Pointer Point to in Virtual Memory?

Function pointers, like any other pointers, point to a specific memory address in the virtual memory of the program. The exact location depends on the implementation and platform.

In general, function pointers point to the memory address where the corresponding function's machine code is stored. This address is usually determined during the compilation and linking process.

It's important to note that function pointers are not limited to pointing only within the executable code segment. They can also point to functions in shared libraries or dynamically loaded modules, expanding their flexibility and usage possibilities.

Keep in mind that the specific details of memory management and organization are implementation-dependent and may vary across different systems and compilers.

---

I hope this readme provides a clear understanding of function pointers and their usage in C. If you have any further questions, feel free to ask!

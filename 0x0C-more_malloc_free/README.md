# 0x0C. C - More malloc, free

This repository contains the solutions for the project **0x0C. C - More malloc, free**, which is part of the curriculum in the low-level programming language track at Holberton School.

In this project, we explore the concepts of automatic and dynamic allocation using `malloc` and `free` in C programming. We also learn how to use the `exit` function and explore the functions `calloc` and `realloc` from the standard library.

## Learning Objectives

- Understand automatic and dynamic allocation in C
- Learn how to use the `malloc` function for dynamic memory allocation
- Understand the concept of memory leaks and how to avoid them using `free`
- Learn how to use the `exit` function to terminate a program
- Understand the purpose and usage of the `calloc` and `realloc` functions

## Files

The project consists of the following files:

| File                   | Description                                        |
| ---------------------- | -------------------------------------------------- |
| `0-malloc_checked.c`   | Function that allocates memory using `malloc`      |
| `1-string_nconcat.c`   | Function that concatenates two strings             |
| `2-calloc.c`           | Function that allocates memory for an array        |
| `3-array_range.c`      | Function that creates an array of integers         |
| `100-realloc.c`        | Function that reallocates a memory block           |
| `101-mul.c`            | Program that multiplies two positive numbers       |
| `holberton.h`          | Header file with function prototypes and includes |

## Usage

To compile the C files, use the following flags:

```
gcc -Wall -Werror -Wextra -pedantic <file.c> -o <output>
```

Replace `<file.c>` with the name of the C file and `<output>` with the desired name of the executable.

For example, to compile `0-malloc_checked.c`, use the following command:

```
gcc -Wall -Werror -Wextra -pedantic 0-malloc_checked.c -o malloc_checked
```

Then, to run the program, execute the following command:

```
./malloc_checked
```

Repeat the same steps for other C files in the project.

## Author

This project is written and maintained by Ian Powell Ndalo.

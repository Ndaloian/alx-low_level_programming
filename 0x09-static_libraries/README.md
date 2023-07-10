# 0x09. C - Static libraries

In this project, we will explore the concept of C static libraries. We will learn what a static library is, how it works, how to create one, and how to use it effectively.

## Table of Contents

- [Introduction to Static Libraries](#introduction-to-static-libraries)
- [Creating a Static Library](#creating-a-static-library)
- [Using a Static Library](#using-a-static-library)
- [Basic Usage of `ar`, `ranlib`, and `nm`](#basic-usage-of-ar-ranlib-and-nm)

## Introduction to Static Libraries

A static library, also known as an archive, is a collection of precompiled object files. It contains a set of functions and symbols that can be linked with other programs at compile-time. When a program is compiled, the necessary object files from the static library are copied into the final executable file.

Static libraries provide a convenient way to reuse code across multiple projects. They help in reducing the size of the final executable by eliminating the need to include the entire codebase of external dependencies.

## Creating a Static Library

To create a static library, we follow these steps:

1. Compile the source code files into object files using the `gcc` compiler:
   ```
   gcc -c file1.c file2.c ...
   ```

2. Create the static library using the `ar` (archiver) command:
   ```
   ar rcs libname.a file1.o file2.o ...
   ```

   The `ar` command creates an archive file named `libname.a`, which contains the object files.

3. Optionally, use the `ranlib` command to generate an index for faster symbol lookup:
   ```
   ranlib libname.a
   ```

## Using a Static Library

To use a static library in a program, we need to perform the following steps:

1. Include the library header file(s) in the source code:
   ```c
   #include "header.h"
   ```

2. Link the program with the static library during compilation:
   ```
   gcc main.c -L/path/to/library -lname
   ```

   Here, `-L` specifies the directory where the library is located, and `-lname` links the program with the library file.

3. Execute the compiled program:
   ```
   ./a.out
   ```

## Basic Usage of `ar`, `ranlib`, and `nm`

- `ar` (archiver): This command is used to create, modify, and extract files from archives. Some common `ar` commands are:
  - `ar rcs libname.a file1.o file2.o ...`: Creates a static library with the given object files.
  - `ar t libname.a`: Lists the files in the archive.

- `ranlib`: This command is used to generate an index for the archive file, enabling faster symbol lookup. The command is optional, but it is commonly used.

- `nm`: This command displays the symbols (functions and variables) defined in an object file or library. Some useful options for `nm` are:
  - `nm libname.a`: Displays the symbols defined in the library.
  - `nm objectfile.o`: Displays the symbols defined in the object file.

These basic commands help us work with static libraries effectively and inspect their contents.

Remember to refer to the official documentation and man pages for more details and usage options of each command.

---

This project will provide you with hands-on experience in creating and using static libraries in C. Enjoy exploring this powerful concept and happy coding!

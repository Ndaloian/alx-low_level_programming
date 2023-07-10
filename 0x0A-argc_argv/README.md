# 0x0A. C - argc, argv: How to use arguments passed to your program

This repository contains examples and explanations on how to use arguments passed to your C programs using the `argc` and `argv` parameters in the `main` function.

## Main Function Prototypes

In C, there are two common prototypes for the `main` function:

### Prototype 1:

```c
int main(void);
```

This prototype does not accept any command-line arguments. It is typically used when your program does not require any inputs from the user or the command line.

### Prototype 2:

```c
int main(int argc, char *argv[]);
```

This prototype accepts command-line arguments. The `argc` parameter represents the number of arguments passed to the program, and `argv` is an array of strings containing the actual arguments.

The `argc` parameter will always be at least 1 because the first element in the `argv` array (`argv[0]`) is always the name of the program itself.

Use this prototype when you need to process command-line arguments and make decisions based on the inputs provided by the user.

## Using __attribute__((unused)) or (void) for Unused Variables/Parameters

In C, you may encounter situations where you have variables or parameters that are not used within a function. This can lead to warnings during compilation. To avoid these warnings, you can use the `__attribute__((unused))` or `(void)` techniques.

### Using __attribute__((unused))

To indicate that a variable or parameter is intentionally unused, you can use the `__attribute__((unused))` attribute. Here's an example:

```c
void myFunction(int x __attribute__((unused))) {
    // Function body
}
```

In this example, the `x` parameter is marked as unused using the `__attribute__((unused))` attribute. This attribute informs the compiler that the variable is intentionally not used, and it suppresses any warnings related to its unused status.

### Using (void)

Another common technique is to cast the unused variable or parameter to `(void)`. Here's an example:

```c
void myFunction(int x) {
    (void)x;  // Marking 'x' as unused
    // Function body
}
```

In this example, the `(void)x;` line explicitly casts `x` to `(void)`, indicating that it is intentionally unused. This technique achieves the same result of suppressing warnings about unused variables or parameters.

Both `__attribute__((unused))` and `(void)` are widely used to maintain code readability and to inform the compiler about intentional unused variables or parameters, avoiding warnings during compilation.

---

Feel free to explore the code examples in this repository to better understand how to work with command-line arguments in your C programs. Happy coding!

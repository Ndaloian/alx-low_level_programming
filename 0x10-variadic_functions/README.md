**0x10. C - Variadic functions**

This repository contains C programs that demonstrate the usage of variadic functions in C.

## What are variadic functions?

Variadic functions in C are functions that can accept a variable number of arguments. These functions are useful when the number of arguments to be passed is not known at compile time. The `stdarg.h` header provides a set of macros to work with variadic functions.

## How to use va_start, va_arg, and va_end macros?

- `va_list`: This is a type used to declare a variable that will hold the information needed by the macros.
- `va_start(va_list, last_param)`: This macro initializes the `va_list` variable to point to the first variable argument. The `last_param` is the last known fixed parameter of the function (the one just before the variadic arguments).
- `va_arg(va_list, type)`: This macro retrieves the value of the next argument from the `va_list`. The `type` parameter is the type of the argument to be retrieved. It also advances the `va_list` to the next argument.
- `va_end(va_list)`: This macro cleans up the `va_list` after all the arguments have been processed. It should be called at the end of the variadic function.

## Why and how to use the const type qualifier?

The `const` type qualifier is used to indicate that a variable's value cannot be modified after initialization. It helps to enforce immutability, making the code more robust and less error-prone. When you declare a variable as `const`, the compiler will prevent any attempts to modify its value, resulting in compile-time errors if such modifications are attempted.

Using `const` is particularly useful in function declarations:

```c
void example_function(const int x);
```

In this case, `example_function` promises not to modify the value of `x`.

## man or help: stdarg

To get more information about the `stdarg` macros and their usage in C, you can use the following commands:

- `man stdarg`: This command displays the manual page for `stdarg`.
- `help stdarg`: This command shows information about `stdarg` on Windows Command Prompt.

Please note that `stdarg` is a standard library, and its usage may slightly differ depending on the system and compiler being used. Always refer to the appropriate documentation or manual for precise details.

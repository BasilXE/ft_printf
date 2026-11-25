*This project has been created as part of the 42 curriculum by basayoub.*

# ft_printf

## Description

The **ft_printf** project is part of the 42 curriculum. Its goal is to recreate the behavior of the standard C `printf()` function by implementing `ft_printf()` in C.

The mandatory part supports these format specifiers:

- `%c` — prints a single character.
- `%s` — prints a string.
- `%p` — prints a pointer address in hexadecimal format.
- `%d` and `%i` — print a signed decimal integer.
- `%u` — prints an unsigned decimal integer.
- `%x` — prints a hexadecimal number using lowercase letters.
- `%X` — prints a hexadecimal number using uppercase letters.
- `%%` — prints a percent sign.

This implementation focuses on the mandatory requirements. **The bonus part has not been implemented.**

## Instructions

### Requirements

- A C compiler such as `cc`.
- `make`.
- The standard C library functions permitted by the project subject.

### Compile the library

Run the following command from the project root:

```bash
make
```

This should compile the source files and create the static library:

```text
libftprintf.a
```

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To rebuild the library from scratch:

```bash
make re
```

### Use the library

Include `ft_printf.h` in your C source file and link against `libftprintf.a`.

Example:

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello, %s! Number: %d\n", "42", 42);
	return (0);
}
```

Compile the example with your project library, for example:

```bash
cc main.c -L. -lftprintf -o test
./test
```

If your project uses additional source directories or a different header location, adjust the compile command accordingly.

## Resources

- The 42 `ft_printf` project subject.
- The C language documentation for variadic functions: `va_list`, `va_start`, `va_arg`, and `va_end`.
- C reference: https://en.cppreference.com/w/c/variadic

### AI usage

AI assistance was used to help understand concepts related to variadic functions, review implementation issues. The implementation and its behavior should be verified by testing the project against the subject requirements.

## Algorithm and Data Structure

The implementation processes the format string from left to right. Ordinary characters are written directly. When a `%` is encountered, the following character is checked to identify the requested conversion, and the corresponding output routine handles that argument.

The function uses a `va_list` to access the variable arguments in order. A character-count value is maintained so that `ft_printf()` can return the number of characters written, matching the behavior required by `printf()`.

No complex data structure is needed for the mandatory part: the format string is traversed sequentially, and each argument is processed as its conversion is encountered. This keeps the implementation straightforward and makes each conversion easier to handle and test.

## Limitations

- The bonus flags and field-width/precision handling are not implemented.
- As required by the subject, this project does not reproduce the original `printf()` buffer-management system.

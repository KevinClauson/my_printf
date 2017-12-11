# Printf Function Project
The _printf function created will print formatted output analogous to the origin printf

#### Prototype: int _printf(const char*format, ...);

# Description
_printf was created as part of the Holberton School curriculum dealing with low level programming and it's overall mission to create engineers who understand peer learning/programming. Said function's capabilities are similar that of the printf found in the standard library and will be discussed below.

# Examples

#### Character: `_printf("%c\n", 'H');`  Output: `H`

#### String: `_printf("%s\n", "Holberton");`  Output: `Holberton`

#### Decimal: `_printf("%d\n", 10);`  Output: `10`

#### Integer: `_printf("%i\n", 10);`  Output: `10`

#### Binary: `_printf("%b\n", 10);`  Output: `1010`

#### Unsigned Integer: `_printf("%u\n", 10);`  Output: `10`

#### Octal: `_printf("%o\n", 10);`  Output: `8`

#### Hexademical version 1: `_printf("%x\n", 10);`  Output: `a`

#### Hexadecimal version 2r: `_printf("%X\n", 10);`  Output:`A`

#### rot13: `_printf("%R\n", "abc");`  Output: `nop`

#### Reverse String: `_printf("%r\n", "Holberton");`  Output: `notrebloH`

#### String Hexadeximal: `_printf("%r\n", "Holberton\n");`  Output: `Holberton\x0A`

# Tasks
Task - Description

[x] 0. Write a function that produces out corresponding to format specifiers c, s

[x] 1. Add functionality of format specifiers d, i

[x] 2. Create a man page for the function

[x] 3. Add functionality of format specifier b

[x] 4. Add functionality of format specifiers u, o, x, X

[x] 6. Add functionality of format specifiers S

[x] 14. Add functionality of format specifiers r

[x] 15. Add functionality of format specifiers R

# Requirements
* Allowed editors: vi, vim, emacs
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* A README.md file, at the root of the folder of the project is mandatory
* Global variables are not permitted
* No more than 5 functions per file
* The prototypes of all functions should be included in your header file called holberton.h
* All your header files should be include guarded
* Authorized functions and macros:
  * write (man 2 write)
  * malloc (man 3 malloc)
  * free (man 3 free)
  * va_start (man 3 va_start)
  * va_end (man 3 va_end)
  * va_copy (man 3 va_copy)
  * va_arg (man 3 va_arg)

# Authors
Kevin Clauson [GitHub](https://github.com/KevinClauson) | Dan Parham [GitHub](https://github.com/dparha)
# ft_printf

`ft_printf` is a custom implementation of the C standard `printf` function.
It reproduces formatted output behavior for a selected set of specifiers and supports both mandatory and bonus features from the 42 curriculum.

---

## Features

- Supported conversion specifiers:
  - `%c` – character
  - `%s` – string
  - `%p` – pointer
  - `%d` / `%i` – signed integers
  - `%u` – unsigned integers
  - `%x` / `%X` – hexadecimal
  - `%%` – literal percent sign
- Returns the total number of printed characters.
- No dynamic memory allocation leaks.

## Project Structure

``` bash
.
├── ft_printf.c
├── ft_printf.h
├── ft_printdi.c
├── ft_printchar.c
├── ft_printu.c
├── ft_printhex.c
├── ft_printp.c
├── ft_printstr.c
└── Makefile

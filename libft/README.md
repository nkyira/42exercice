Libft
Description

Libft is a 42 school project to recreate standard C library functions and implement additional utility functions in C.

The functions are compiled into a static library named libft.a.

Functions
Part 1: Libc Functions
Character checks: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
String functions: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup
Memory functions: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc
Conversions: ft_toupper, ft_tolower, ft_atoi
Part 2: Additional Functions
String manipulation: ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_strmapi, ft_striteri
Integer conversion: ft_itoa
Output functions: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
Compilation
make


This creates libft.a.

Available rules:

make or make all: Compile the library.
make clean: Remove object files.
make fclean: Remove object files and the library.
make re: Recompile the library.
Usage

Include libft.h and link the library when compiling:

cc -Wall -Wextra -Werror main.c -L. -lft -o program

Requirements
Compile with -Wall -Wextra -Werror.
Use ar to create the library.
No global variables.
All source files must be at the repository root.

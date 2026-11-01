*This project has been created as part of the 42 curriculum by abouferr.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 School curriculum. The goal of this project is to recreate several standard C library functions and implement additional utility functions.

This project helps develop a better understanding of C programming, memory management, pointers, strings, and linked lists.

The library can be reused in future C projects.

## Instructions

### Compilation

Run the following command to compile the library:

```bash
make
```

This generates the `libft.a` static library.

Available Makefile rules:

- `make`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Rebuilds the library from scratch.

### Usage

Include `libft.h` in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -I. -o program
```

Run the program:

```bash
./program
```

## Library Description

The library contains the following groups of functions.

### 1. Character Functions

Functions used to check and manipulate individual characters.

- `ft_isalpha`: Checks whether a character is alphabetic.
- `ft_isdigit`: Checks whether a character is a digit.
- `ft_isalnum`: Checks whether a character is alphanumeric.
- `ft_isascii`: Checks whether a character belongs to the ASCII character set.
- `ft_isprint`: Checks whether a character is printable.
- `ft_toupper`: Converts a lowercase letter to uppercase.
- `ft_tolower`: Converts an uppercase letter to lowercase.

### 2. String Functions

Functions used to manipulate strings.

- `ft_strlen`: Calculates the length of a string.
- `ft_strchr`: Finds the first occurrence of a character.
- `ft_strrchr`: Finds the last occurrence of a character.
- `ft_strncmp`: Compares two strings up to a specified length.
- `ft_strlcpy`: Copies a string into a destination buffer.
- `ft_strlcat`: Appends a string to a destination buffer.
- `ft_strnstr`: Searches for a substring within a string.
- `ft_strdup`: Creates a duplicate of a string.
- `ft_substr`: Extracts a substring.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string using a delimiter.
- `ft_strmapi`: Applies a function to each character of a string.
- `ft_striteri`: Applies a function to each character using its index.

### 3. Memory Functions

Functions used for memory allocation and manipulation.

- `ft_memset`: Fills a memory area with a byte value.
- `ft_bzero`: Sets a memory area to zero.
- `ft_memcpy`: Copies memory from one location to another.
- `ft_memmove`: Copies memory safely when source and destination overlap.
- `ft_memchr`: Searches for a byte in a memory area.
- `ft_memcmp`: Compares two memory areas.
- `ft_calloc`: Allocates memory and initializes it to zero.

### 4. Conversion and Output Functions

Functions used for numeric conversion and output.

- `ft_atoi`: Converts a string to an integer.
- `ft_itoa`: Converts an integer to a string.
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

### 5. Linked List Functions

Functions used to create and manage singly linked lists.

- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node to the beginning of a list.
- `ft_lstsize`: Counts the number of nodes in a list.
- `ft_lstlast`: Returns the last node of a list.
- `ft_lstadd_back`: Adds a node to the end of a list.
- `ft_lstdelone`: Deletes one node using a specified deletion function.
- `ft_lstclear`: Deletes and frees an entire list.
- `ft_lstiter`: Applies a function to each node's content.
- `ft_lstmap`: Creates a new list by applying a function to each node's content.

The linked list functions use the `t_list` structure defined in `libft.h`.

## Resources

The following resources are useful for understanding the concepts and implementing the library:

- [C Library Reference](https://en.cppreference.com/w/c/header)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [42 School](https://42.fr/)

### AI Usage

AI tools were used as a supplementary learning resource during development. They helped explain C concepts, clarify function behavior, identify potential bugs, and discuss memory management and edge cases.

The implementation, testing, and verification of the functions remain the responsibility of the project author. AI-generated suggestions were reviewed and adapted as needed.

## Author

- **Login:**  abouferr 
- **School:** 42
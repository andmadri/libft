# Libft

`libft` is a personal library of C functions, mirroring some standard library functions for tasks like string manipulation, memory allocation, and linked list handling.

The aim of the project is to gain insight into the inner workings and principles of basic standard functions to have a good foundation for further projects in C.

## Functions in Libft

### Functions from `<ctype.h>`

- `ft_isalpha` - Checks for an alphabetic character.
- `ft_isdigit` - Checks for a digit (0 through 9).
- `ft_isalnum` - Checks for an alphanumeric character.
- `ft_isascii` - Checks whether `c` fits into the ASCII character set.
- `ft_isprint` - Checks for any printable character.
- `ft_toupper` - Converts a character to uppercase.
- `ft_tolower` - Converts a character to lowercase.

### Functions from `<string.h>`

- `ft_memset` - Fills memory with a constant byte.
- `ft_strlen` - Calculates the length of a string.
- `ft_bzero` - Zeros out a byte string.
- `ft_memcpy` - Copies memory area.
- `ft_memmove` - Copies memory area, handling overlap safely.
- `ft_strlcpy` - Copies a string to a specific size buffer.
- `ft_strlcat` - Concatenates a string to a specific size buffer.
- `ft_strchr` - Locates the first occurrence of a character in a string.
- `ft_strrchr` - Locates the last occurrence of a character in a string.
- `ft_strncmp` - Compares two strings up to a specified number of characters.
- `ft_memchr` - Scans memory for a character.
- `ft_memcmp` - Compares two memory areas.
- `ft_strnstr` - Locates a substring within a string.
- `ft_strdup` - Creates a duplicate of the given string.

### Functions from `<stdlib.h>`

- `ft_atoi` - Converts a string to an integer.
- `ft_calloc` - Allocates memory and sets its bytes' values to zero.

### Non-standard Functions

- `ft_substr` - Returns a substring from a string.
- `ft_strjoin` - Concatenates two strings into a new string.
- `ft_strtrim` - Trims specified characters from the beginning and end of a string.
- `ft_split` - Splits a string into an array using a specified delimiter.
- `ft_itoa` - Converts an integer to a string.
- `ft_strmapi` - Applies a function to each character of a string, creating a new string.
- `ft_striteri` - Applies a function to each character of a string, modifying the string in place.
- `ft_putchar_fd` - Outputs a character to a file descriptor.
- `ft_putstr_fd` - Outputs a string to a file descriptor.
- `ft_putendl_fd` - Outputs a string to a file descriptor, followed by a newline.
- `ft_putnbr_fd` - Outputs an integer to a file descriptor.

### Linked List Functions

- `ft_lstnew` - Creates a new list element.
- `ft_lstadd_front` - Adds an element at the beginning of a list.
- `ft_lstsize` - Counts the number of elements in a list.
- `ft_lstlast` - Returns the last element of the list.
- `ft_lstadd_back` - Adds an element at the end of a list.
- `ft_lstclear` - Deletes and frees the list.
- `ft_lstiter` - Applies a function to each element of a list.
- `ft_lstmap` - Applies a function to each element of a list, creating a new list.

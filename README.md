# Libft

![Libft](https://img.shields.io/badge/Libft-C%20Library-blue.svg)

## 📌 Project Description
Libft is a custom C library that includes essential functions for string manipulation, memory management, and linked list operations. It aims to enhance C programming skills by recreating standard library functions and implementing useful utilities.

## 📂 Contents
The Libft library includes various helper functions categorized as follows:

- **String Manipulation**: `ft_strlen`, `ft_strcpy`, `ft_strjoin`, `ft_strchr`, `ft_strdup`, `ft_striteri`, `ft_strlcat`, `ft_strlcpy`, `ft_strmapi`, `ft_strncmp`, `ft_strnstr`, `ft_strrchr`, `ft_strtrim`, `ft_substr`.
- **Memory Management**: `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_bzero`.
- **Character Checks & Conversions**: `ft_isalnum`, `ft_isalpha`, `ft_isascii`, `ft_isdigit`, `ft_isprint`, `ft_tolower`, `ft_toupper`.
- **I/O Functions**: `ft_putchar_fd`, `ft_putendl_fd`, `ft_putnbr_fd`, `ft_putstr_fd`.
- **Linked Lists (Bonus)**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.
- **Other Useful Functions**: `ft_atoi`, `ft_itoa`, `ft_split`.

## ⚙️ Installation
To compile the library, run the following command:

```sh
make
```

This command will generate the static library file `libft.a`.

## 🚀 Usage
To use the Libft library in your project, include the header file as follows:

```c
#include "libft.h"
```

Then, compile your program with:

```sh
gcc main.c -L. -lft -o program
```

If `main.c` is located in a different directory:

```sh
gcc src/main.c -Llibft -lft -Ilibft -o program
```

## 🛠 Function List

| Function | Description |
|-----------|-------------|
| `ft_atoi` | Converts a string to an integer |
| `ft_bzero` | Writes zeros to a byte string |
| `ft_calloc` | Allocates memory and initializes it to zero |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isalpha` | Checks if a character is an alphabetic letter |
| `ft_isascii` | Checks if a character is an ASCII character |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isprint` | Checks if a character is printable |
| `ft_itoa` | Converts an integer to a string |
| `ft_memchr` | Scans memory for a character |
| `ft_memcmp` | Compares two memory areas |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Moves memory area |
| `ft_memset` | Fills a block of memory with a specific value |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_split` | Splits a string using a delimiter |
| `ft_strchr` | Locates a character in a string |
| `ft_strdup` | Duplicates a string |
| `ft_striteri` | Applies a function to each character of a string |
| `ft_strjoin` | Joins two strings |
| `ft_strlcat` | Concatenates strings with size control |
| `ft_strlcpy` | Copies strings with size control |
| `ft_strlen` | Returns the length of a string |
| `ft_strmapi` | Creates a new string by applying a function to each character |
| `ft_strncmp` | Compares two strings up to a specified length |
| `ft_strnstr` | Locates a substring in a string |
| `ft_strrchr` | Locates the last occurrence of a character in a string |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_substr` | Extracts a substring from a string |
| `ft_tolower` | Converts an uppercase character to lowercase |
| `ft_toupper` | Converts a lowercase character to uppercase |
| `ft_lstnew` | Creates a new linked list node |
| `ft_lstadd_front` | Adds a new node to the front of a linked list |
| `ft_lstsize` | Returns the size of a linked list |
| `ft_lstlast` | Returns the last node of a linked list |
| `ft_lstadd_back` | Adds a new node to the back of a linked list |
| `ft_lstdelone` | Deletes a node from a linked list |
| `ft_lstclear` | Clears an entire linked list |
| `ft_lstiter` | Iterates through a linked list and applies a function |
| `ft_lstmap` | Creates a new list by applying a function to each element |

## 📜 License
This project is licensed under the **MIT License**.

## 📧 Contact
For any questions or feedback, feel free to reach out via GitHub!


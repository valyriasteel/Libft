# Libft

![Libft](https://img.shields.io/badge/Libft-C%20Library-blue.svg)

## 📌 Project Description
Libft is a custom C library that includes essential functions for string manipulation, memory management, and linked list operations. It aims to enhance C programming skills by recreating standard library functions and implementing useful utilities.

## 📂 Contents
The Libft library includes various helper functions categorized as follows:

### 🔤 String Manipulation

- `ft_strlen` - Returns the length of a string
- `ft_strcpy` - Copies a string
- `ft_strjoin` - Joins two strings
- `ft_strchr` - Finds a character in a string
- `ft_strdup` - Duplicates a string
- `ft_strtrim` - Trims characters from both ends of a string
- `ft_substr` - Extracts a substring from a string

### 🖥️ Memory Management

- `ft_memset` - Fills a block of memory with a specific value
- `ft_memcpy` - Copies memory area
- `ft_memmove` - Moves memory area
- `ft_calloc` - Allocates memory and initializes it to zero
- `ft_bzero` - Writes zeros to a byte string

### 🔢 Character Checks & Conversions

- `ft_isalnum` - Checks if a character is alphanumeric
- `ft_isalpha` - Checks if a character is an alphabetic letter
- `ft_isascii` - Checks if a character is an ASCII character
- `ft_isdigit` - Checks if a character is a digit
- `ft_isprint` - Checks if a character is printable
- `ft_tolower` - Converts an uppercase character to lowercase
- `ft_toupper` - Converts a lowercase character to uppercase

### 🖊️ I/O Functions

- `ft_putchar_fd` - Outputs a character to a file descriptor
- `ft_putendl_fd` - Outputs a string followed by a newline to a file descriptor
- `ft_putnbr_fd` - Outputs an integer to a file descriptor
- `ft_putstr_fd` - Outputs a string to a file descriptor

### 🔗 Linked Lists

- `ft_lstnew` - Creates a new linked list node
- `ft_lstadd_front` - Adds a new node to the front of a linked list
- `ft_lstsize` - Returns the size of a linked list
- `ft_lstlast` - Returns the last node of a linked list
- `ft_lstadd_back` - Adds a new node to the back of a linked list
- `ft_lstdelone` - Deletes a node from a linked list
- `ft_lstclear` - Clears an entire linked list
- `ft_lstiter` - Iterates through a linked list and applies a function
- `ft_lstmap` - Creates a new list by applying a function to each element

### 🔧 Other Useful Functions

- `ft_atoi` - Converts a string to an integer
- `ft_itoa` - Converts an integer to a string
- `ft_split` - Splits a string using a delimiter

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
cc main.c -L. -lft -o program
```

If `main.c` is located in a different directory:

```sh
cc src/main.c -Llibft -lft -Ilibft -o program
```

### Example Usage with `libft.a`
After compiling Libft into `libft.a`, you can use its functions in your own programs. Below is an example demonstrating this.

#### Example: Using `ft_strlen` from `libft.a`
```c
#include "libft.h"
#include <stdio.h>

int main() {
    char *str = "Hello, Libft!";
    size_t length = ft_strlen(str);
    printf("String length: %zu\n", length);
    return 0;
}
```

Compile and link with `libft.a`:
```sh
cc main.c -L. -lft -o my_program
./my_program
```

#### Expected Output:
```
String length: 13
```

## 📜 License
This project is licensed under the **[MIT License](LICENSE)**.

## 📧 Contact
For any questions or feedback, feel free to reach out via GitHub!

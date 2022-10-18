<h1 align="center">
	🧰 Libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
	
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/surfi89/libft?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/surfi89/libft?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/surfi89/libft?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/surfi89/libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/surfi89/libft?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects.

	Programming in C can be very tedious when you don't have access to the very useful standard functions.
	This project gives you the opportunity to rewrite those functions to understand them and learn to use them.
	The library will help you for your future projects in C. Through this project, you have the opportunity
	to extend your list of functions in your own way!

For more detailed information, look at the [*subject of this project*](https://github.com/rep-aku/Libft/blob/main/libft.pdf).


## List of functions:

### Functions from `<ctype.h>` library

* [`ft_isascii`](sources/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](sources/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](sources/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](sources/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](sources/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](sources/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](sources/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](sources/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](sources/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](sources/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](sources/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](sources/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](sources/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](sources/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](sources/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](sources/ft_strlen.c)				- find length of string.
* [`ft_strchr`](sources/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](sources/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](sources/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](sources/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strdup`](sources/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](sources/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](sources/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_itoa`](sources/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](sources/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](sources/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](sources/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](sources/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](sources/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](sources/ft_striteri.c)			- 
* [`ft_putchar_fd`](sources/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](sources/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](sources/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](sources/ft_putnbr_fd.c)		- output integer to given file.

### Linked list functions (bonus)

* [`ft_lstnew`](sources/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](sources/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](sources/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](sources/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](sources/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](sources/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](sources/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](sources/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](sources/ft_lstmap.c)				- apply function to content of all list's elements into new list.


## 🛠️ Usage

### Requirements

The library is written in C language and needs the *`gcc` compiler* and some standard *C libraries* to run.

### Instructions

*1. Compiling the library*

To compile the library, go to its path and run:

For all mandatory functions:

shell
$ make


For bonus functions:

shell
$ make bonus


*2. Cleaning all binary (.o) and executable files (.a)*

To clean all files generated while doing a make, go to the path and run:

shell
$ make fclean


*3. Using it in your code*

To use the library functions in your code, simply include its header:

C
#include "libft.h"


## 📋 Testing

You can use any of this third party testers to test the project


* [Tripouille/libfTester](https://github.com/Tripouille/libftTester)
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)

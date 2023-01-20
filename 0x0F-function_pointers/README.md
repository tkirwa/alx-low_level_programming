## 0x0F. C - Function pointers
Resources
Read or watch:

- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/ "Function Pointer in C")
- [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html "Pointers to functions")
- [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE "Function Pointers in C / C++")
- [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s "why pointers to functions?")
- [Everything you need to know about pointers in C](https://boredzo.org/pointers/ "Everything you need to know about pointers in C")

------------
## Tasks
#### 0. What's my name
###### 0-print_name.c - Write a function that prints a name.

Prototype: `void print_name(char *name, void (*f)(char *));`
###### Repo:
- GitHub repository: `alx-low_level_programming`
- Directory: `0x0F-function_pointers`
- File: `0-print_name.c`

------------

#### 1. If you spend too much time thinking about a thing, you'll never get it done
###### 1-array_iterator.c - Write a function that executes a function given as a parameter on each element of an array.
Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
- where `size` is the size of the array
- and `action` is a pointer to the function you need to use

###### Repo:
- GitHub repository: `alx-low_level_programming`
- Directory: `0x0F-function_pointers`
- File: `1-array_iterator.c`

------------

#### 2. To hell with circumstances; I create opportunities
###### 2-int_index.c - Write a function that searches for an integer.
Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
- where size is the number of elements in the array array
- cmp is a pointer to the function to be used to compare values
- int_index returns the index of the first element for which the cmp function does not return 0
- If no element matches, return -1
- If size <= 0, return -1

###### Repo:
- GitHub repository: `alx-low_level_programming`
- Directory: `0x0F-function_pointers`
- File: `2-int_index.c`

------------

#### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
###### 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h - Write a program that performs simple operations.
###### Repo:
GitHub repository: `alx-low_level_programming`
Directory: `0x0F-function_pointers`
File: `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`, `3-calc.h`

------------

#### 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
###### 100-main_opcodes.c - Write a program that prints the opcodes of its own main function.

###### Repo:
- GitHub repository: `alx-low_level_programming`
- Directory: `0x0F-function_pointers`
- File: `100-main_opcodes.c`

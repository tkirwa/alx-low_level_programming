#include <stdio.h>
/**
 * main - main marks the entry point into the program
 * @a: First member - integer variable
 * @b: Second member - long integer variable
 * @c: Third member - long long integer variable
 * @d: Fourth member - a character variable
 * @f: fifth member - a float variable
 (* Description: Uses printf contained in <stdio.h> to print the size of each data type as standard output)?
 *
(* stdio header: Contains function printf & data types)*
 * Return: returned value is 0 which means the execution was successful
 */
int main() {
	    int a; long int b; long long int c; char d; float f;
	        printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
		    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
		        printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
			    printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
			        printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
				return (0);
}

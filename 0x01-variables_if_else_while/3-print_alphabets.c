#include <stdio.h>
/**
 * main - main marks the entry point into the program
 * @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Write a program that prints the alphabet in lowercase)?
(* Description: ...and the uppercase)?
 *
(* stdio.h header: performing input and output)*
 * Return: Always 0.
 */
int main(void)
{
/*Declaration*/
char c;

/*For Loop for iterating through the lowercase alphabet*/
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

/*For Loop for iterating through the uppercase alphabet*/
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return 0;
}

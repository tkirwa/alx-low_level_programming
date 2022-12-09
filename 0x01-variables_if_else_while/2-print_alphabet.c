#include <stdio.h>
/**
 * main - main marks the entry point into the program
 * @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Write a program that prints the alphabet in lowercase)?
 *
(* stdio.h header: performing input and output)*
 * Return: Always 0.
 */
int main(void)
{
/*Declaration*/
char c;

/*For Loop for iterating through the letters of the alphabet*/
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

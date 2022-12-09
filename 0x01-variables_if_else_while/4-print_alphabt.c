#include <stdio.h>
/**
* main - main marks the entry point into the program
* @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Write a program that prints the alphabet in lowercase)?
* except 'e' & 'q'
*
(* stdio.h header: performing input and output)*
* Return: Always 0.
*/
int main(void)
{
/*Declaration*/
char c;

/*For Loop for iterating through alphabet except 'e' & 'q'*/
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
* main - main marks the entry point into the program
* @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Write a program that prints all the numbers of base 16...)?
*   in lowercase, followed by a new line.
*
(* stdio.h header: performing input and output)*
* Return: Always 0.
*/
int main(void)
{
/*Declaration*/
int n;

/*For Loop for iterating through numbers of base 16 in lowercase*/
for (n = 0; n <= 15; n++)
{
if (n >= 10)
{
putchar(n - 10 + 'a');
}
else
{
putchar(n + '0');
}
}
putchar('\n');
return (0);
}

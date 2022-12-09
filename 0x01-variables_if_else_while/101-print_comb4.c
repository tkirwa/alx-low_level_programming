#include <stdio.h>
/**
* main - main marks the entry point into the program
* @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Write a program that prints all possible different...)?
*  combinations of three digits.
*
(* stdio.h header: performing input and output)*
* Return: Always 0.
*/
int main(void)
{
/*Declaration*/
int a, b, c;

/*Nested For Loops for all possible three-digit combination*/
for (a = 0; a <= 9; a++)
{
for (b = a + 1; b <= 9; b++)
{
for (c = b + 1; c <= 9; c++)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a == 7 && b == 8 && c == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

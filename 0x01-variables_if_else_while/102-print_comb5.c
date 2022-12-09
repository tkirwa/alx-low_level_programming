#include <stdio.h>
/**
* main - main marks the entry point into the program
* @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Write a program that prints all possible...)?
*  combinations of two two-digit numbers.
*
(* stdio.h header: performing input and output)*
* Return: Always 0.
*/
int main(void)
{
/*Declaration*/
int a, b;

/*Nested For Loops for all possible three-digit combination*/
for (a = 0; a <= 99; a++)
{
for (b = a; b <= 99; b++)
{
if (a != b)
{
putchar(a / 10 + '0');
putchar(a % 10 + '0');
putchar(' ');
putchar(b / 10 + '0');
putchar(b % 10 + '0');
if (a == 98 && b == 99)
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

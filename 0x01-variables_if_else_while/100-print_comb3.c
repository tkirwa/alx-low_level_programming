#include <stdio.h>
/**
* main - main marks the entry point into the program
* @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Write a program that prints all possible different...)?
*  combinations of two digits.
*
(* stdio.h header: performing input and output)*
* Return: Always 0.
*/
int main(void)
{
/*Declaration*/
int a, b;

/*For Loop for all possible two-digit combination*/
for (a = 0; a <= 9; a++)
{
for (b = a + 1; b <= 9; b++)
{
putchar(a + '0');
putchar(b + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return 0;
}


#include <stdio.h>
/**
* main - main marks the entry point into the program
* @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Write a program that prints all single digit numbers of...)?
*  base 10 starting from 0, followed by a new line
*
(* stdio.h header: performing input and output)*
* Return: Always 0.
*/
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if (num == 9)
continue;

putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}

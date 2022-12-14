#include "main.h"
#include <stdio.h>
/**
* print_to_98 - function that prints all natural numbers from n to 98
*
* @n: the length of an array to be generated
*/
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
printf("\n");
}

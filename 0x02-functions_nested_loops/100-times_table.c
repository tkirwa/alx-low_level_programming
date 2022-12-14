#include "main.h"

/**
* print_times_table - times table function
* @n: integer to return
*
*/
void print_times_table(int n)
{
int num, mult, prod;

if (n < 0 || n > 15)
{
return;
}

for (num = 0; num <= n; num++)
{
for (mult = 0; mult <= n; mult++)
{
prod = num * mult;
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10) % 10) + '0');
_putchar((prod % 10) + '0');
}
else if (prod >= 10)
{
_putchar(' ');
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}

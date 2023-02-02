#include "lists.h"
#include <unistd.h>
#include "_putchar.c"

/**
 * print_listint - function that prints all elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
int n = h->n;
int divisor = 1000000000;
count++;

if (n == 0)
{
_putchar('0');
}
else
{
while (divisor > 0)
{
int digit = n / divisor % 10;
if (digit != 0 || divisor == 1)
{
_putchar('0' + digit);
}
divisor /= 10;
}
}
_putchar('\n');
h = h->next;
}

return (count);
}

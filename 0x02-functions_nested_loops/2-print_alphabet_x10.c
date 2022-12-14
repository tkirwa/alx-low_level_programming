#include "main.h"
/**
 * print_alphabet - Write a function that prints 10 times the alphabet..
 * in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
/*Declaration*/
int i;

for (i = 0; i < 10; i++)
{
/*Declaration*/
char letter;
/*for loop*/
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
/*new line*/
_putchar('\n');
}
}



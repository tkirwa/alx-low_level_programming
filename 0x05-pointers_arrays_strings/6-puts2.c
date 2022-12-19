#include "main.h"

/**
* puts2 - Prints every other character of a null-terminated string, starting with the first character, followed by a new line
* @str: pointer to the string to be printed
*/
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
_putchar(str[i]);

_putchar('\n');
}

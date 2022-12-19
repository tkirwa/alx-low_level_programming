#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _atoi - converts a string to an integer
* @s: pointer to the string to be converted
*
* Return: the converted integer...
* or 0 if no numbers are found in the string
*/
int _atoi(char *s)
{
int i, sign, result;

sign = 1;
result = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign *= -1;
}
else if (isdigit(s[i]))
{
result = result * 10 + s[i] - '0';
}
else if (result > 0)
{
break;
}
}

return (result * sign);
}

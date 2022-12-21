#include "main.h"

/**
* rot13 - encodes a string using rot13
* @s: string to encode
* Return: pointer to the encoded string
*/
char *rot13(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
if (s[i] > 'm')
s[i] -= 13;
else
s[i] += 13;
}
else if (s[i] >= 'A' && s[i] <= 'Z')
{
if (s[i] > 'M')
s[i] -= 13;
else
s[i] += 13;
}
}

return (s);
}

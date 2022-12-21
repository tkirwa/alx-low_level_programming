#include "main.h"
#include <string.h>
/**
* infinite_add - adds values of two strings together
* @n1: first string of integers
* @n2: second string of ints
* @r: result string
* @size_r: size of result string
* Return: pointer to result string, or NULL if the result string is not large enough
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int i, j;

if (len1 + 1 > size_r || len2 + 1 > size_r)
return NULL;

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
int sum = carry;

if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

carry = sum / 10;
sum = sum % 10;

r[len1 > len2 ? i : j] = sum + '0';
}

if (carry)
r[len1 > len2 ? i : j] = carry + '0';

return r;
}

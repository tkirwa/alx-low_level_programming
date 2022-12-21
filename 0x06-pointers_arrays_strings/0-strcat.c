#include <stdio.h>

/**
 * _strcat - Concatenate two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *end = dest;

    /* Find the end of the dest string */
    while (*end != '\0')
    {
        end++;
    }

    /* Append src to the end of dest */
    while (*src != '\0')
    {
        *end = *src;
        end++;
        src++;
    }

    /* Add a terminating null byte */
    *end = '\0';

    /* Return a pointer to the resulting string dest */
    return (dest);
}

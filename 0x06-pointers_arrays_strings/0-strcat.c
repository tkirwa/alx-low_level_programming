#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    /* Find the end of the dest string */
    for (i = 0; dest[i] != '\0'; i++)
        ;

    /* Append src to dest */
    for (j = 0; src[j] != '\0'; j++)
        dest[i + j] = src[j];

    /* Add a terminating null byte */
    dest[i + j] = '\0';

    return dest;
}

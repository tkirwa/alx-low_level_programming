#include <stdio.h>

/*
 * _puts_recursion - prints a string followed by a new line, using recursion
 * @s: pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
    /*base case: end of string reached*/
    if (*s == '\0')
    {
        /*print new line after the string*/
        putchar('\n');
        return;
    }
    /*print current character*/
    putchar(*s);
    /*move to next character*/
    _puts_recursion(s + 1);
}

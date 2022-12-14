#include "main.h"
/**
(* Description: print_alphabet_x10 prints 10 times the alphabet...)?
*  in lowercase, followed by a new line.
(* print_alphabet_x10 - Write a function that prints 10 times the alphabet..)?
* in lowercase, followed by a new line
* 
*/
void print_alphabet_x10(void)
{
/*Declaration*/
int i;

/*for loop*/
for (i = 0; i < 10; i++)
{
/*Declaration*/
char c;

/*for loop*/
for (c = 'a'; c <= 'z'; c++)
{
/*prints alphabetical letters*/
_putchar(c);
}
/*prints new line*/
_putchar('\n');
}
}

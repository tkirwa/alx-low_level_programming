#include "main.h"
/**
* @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Write a function that prints 10 times the alphabet...)?
*  in lowercase, followed by a new line.
* print_alphabet - Write a function that prints 10 times the alphabet..
* in lowercase, followed by a new line
*/
void print_alphabet_x10(void)
{
/*Declaration*/  
int i;

/*for loop*/
for (i = 0; i < 10; i++)
{
/*Declaration*/  
char letter;
/*for loop*/
for (letter = 'a'; letter <= 'z'; letter++)
{
/*prints alphabetical letters*/
_putchar(letter);
}
/*prints new line*/
_putchar('\n');
}
}

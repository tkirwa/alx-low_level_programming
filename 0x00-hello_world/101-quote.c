#include <stdio.h>
#include <unistd.h>
/**
 * main - main marks the entry point into the program
 * @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Prints out the last part of a quote in the standard error.)?
 *
(* unistd header: Contains function write)*
 * Return: 1 if success.
 */
int main(void)
{
	write(2,
		"and that piece of art is useful - Dora Korpar, 2015-10-19\n\n",
		58);

	return (1);
}

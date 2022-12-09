#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main marks the entry point into the program
 * @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Prints a random number and states whether)?
 *
(* stdlib.h header: memory allocation, process control, conversions*
(* time.h header: provide standardized access to time/dat)*
 * Return: Always 0.
 */
int main(void)
{
	int n;

	/* Intializes random number generator */
	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	if(n>0)
		printf("%d is positive\n", n);
	else if(n<0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main marks the entry point into the program
 * @void: When parameter X is void, it means it is not acceptions any arg
(* Description: Prints a random number and states whether)?
 *
(* stdlib.h header: memory allocation, process control, conversions)*
(* time.h header: provide standardized access to time/date)*
 * Return: Always 0.
 */
int main(void)
{
int n = 0;
int last_digit = 0;

srand(time(NULL)); /*Initialize random number generator*/
n = rand() - RAND_MAX / 2; /*Generate random number*/
/* Compute last digit of n */
last_digit = n % 10;
/*Print last digit of n*/
printf("The last digit of %d is %d\n", n, last_digit);

if (last_digit > 5)
printf("and is greater than 5\n");
else if (last_digit == 0)
printf("and is 0\n");
else
printf("and is less than 6 and not 0\n");
return (0);
}

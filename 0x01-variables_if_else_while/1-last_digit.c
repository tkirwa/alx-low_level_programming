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
if (last_digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
else if (last_digit == 0)
printf("Last digit of %d is %d and is 0\n", n, last_digit);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
return (0);
}

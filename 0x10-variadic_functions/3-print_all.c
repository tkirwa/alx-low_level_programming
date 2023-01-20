#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything passed to the function
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
char *string;
int i = 0;

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
string = va_arg(args, char*);
if (!string)
printf("(nil)");
else
printf("%s", string);
break;
}
if (format[i + 1])
printf(", ");
i++;
}
printf("\n");
va_end(args);
}

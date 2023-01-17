#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include "_putchar.c"

int main(void)
{
    char *file;
    int i;

    file = __FILE__;

    i = 0;
    while (file[i])
        _putchar(file[i++]);
    _putchar('\n');
    return (EXIT_SUCCESS);
}

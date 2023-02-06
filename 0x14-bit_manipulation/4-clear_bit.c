#include <limits.h>
#include "main.h"


int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(*n) * CHAR_BIT - 1))
return -1;

*n &= ~(1UL << index);

return 1;
}

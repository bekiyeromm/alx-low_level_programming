#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return: The value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;

if (index >= 32)
return (-1);

i = 1 << index;
i &= n;
i >> = index;

return (i);
}

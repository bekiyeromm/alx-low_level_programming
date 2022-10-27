#include "main.h"
/**
 * set_bit - sets the specified bit
 * @n: number
 * @index: position of bits to be set
 * Return: number with bit seted
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int setbit;
if (index >= 32)
	return (-1);
setbit = 1 << index;
*n = *n | setbit;
return (1);
}

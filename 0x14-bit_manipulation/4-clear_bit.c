#include "main.h"
/**
 * clear_bit - clears the specified bit
 * @n: number
 * @index: position of bits to be set
 * Return: number with bit cleared
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int clrbit;
if (index >= 32)
	return (-1);
clrbit = ~(1 << index);
*n = *n & clrbit;
return (1);
}

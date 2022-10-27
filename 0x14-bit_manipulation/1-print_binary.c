#include "main.h"
#include <math.h>
/**
 * print_binary -prints binary number
 * @n: number n
 *
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int j, k, mask;

	for (i = 32; i >= 0; i--)
	{
		j = i;
		mask = 1 << j;
		k = n & mask;
		k == 0 ? _putchar('0') : _putchar('1');
	}
}

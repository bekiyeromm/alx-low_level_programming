#include "main.h"
/**
 * flip_bits -flips bits
 * @n: number n
 * @m: number m
 *
 * Return: the number of flip bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flipcount = 0;

	/* & each bits of n && m with 1*/
	 /* and store them if flip_n and flip_m*/
	 /* if flip_n != flip_m then we will flip that bit*/
	while (n > 0 || m > 0)
	{
		int flip_n = (n & 1);
		int flip_m = (m & 1);

		if (flip_n != flip_m)
		{
			flipcount++;
		}
		/* right shifting n and m*/
		n = n >> 1;
		m = m >> 1;
	}
	return (flipcount);
}

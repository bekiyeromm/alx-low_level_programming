#include<stdio.h>
#include "main.h"
/**
 * print_to_98 -print number up to 98 
 *
 * @n:number n
 *
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98");

	}
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("\n");
}

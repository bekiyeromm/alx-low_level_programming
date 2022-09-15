#include<stdio.h>
#include "main.h"
/**
 * print_triangle -main entry
 *
 * @size: size of triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (i > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
}

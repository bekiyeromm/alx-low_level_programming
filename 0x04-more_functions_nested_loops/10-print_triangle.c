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
	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

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
}

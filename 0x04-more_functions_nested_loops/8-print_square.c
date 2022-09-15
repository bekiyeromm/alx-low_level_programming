#include<stdio.h>
#include "main.h"
/**
 * print_square -function start
 *
 *@size: size of squere
 *
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < (size - 1); j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

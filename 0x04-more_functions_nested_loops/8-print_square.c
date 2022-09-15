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

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (size > 0)
			{
				_putchar('#');
			}
			else
				_putchar('\n');
		}
		_putchar('\n');
	}
}

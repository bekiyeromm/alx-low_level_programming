#include<stdio.h>
#include "main.h"
/**
 *print_diagonal -main entry
 *
 *@n: size of diagonal
 */
void print_diagonal(int n)
{
	int i, j, k;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

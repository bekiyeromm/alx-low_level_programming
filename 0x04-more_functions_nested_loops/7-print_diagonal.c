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

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			for (k = i; k <= i; k++)
			{
				_putchar('\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

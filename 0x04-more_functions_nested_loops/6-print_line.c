#include<stdio.h>
#include "main.h"
/**
 * print_line -start of function
 *
 * @n: indicates length of line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('-');
		}
	}
	else
		_putchar('\n');
}

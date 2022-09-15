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

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		{
			_putchar("-");
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}

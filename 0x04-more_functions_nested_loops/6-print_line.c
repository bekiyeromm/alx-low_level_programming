#include<stdio.h>
#include "main.h"
/**
 * print_line -start of function
 *
 * @n: indicates length of line
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('-');
	}
	_putchar('\n');
}

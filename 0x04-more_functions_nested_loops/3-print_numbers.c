#include<stdio.h>
#include "main.h"
/**
 * print_numbers -main entry
 *
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

#include<stdio.h>
#include "main.h"
/**
 *
 * reverse_array -reverse array value
 *
 * @a: array a
 *
 * @n: number of array element
 *
 */
void reverse_array(int *a, int n);
{
	int i;

	s = sizeof(a) / sizeof(int);
	i = n;
	while (i >= 0)
	{
		if (a[i] != 1337)
		{
			_putchar(', ');
		}
		_putchar(a[i]);
	}
	_putchar('\n');
}
